#include <bits/stdc++.h>
using namespace std;

int mod(string t, int N){
    int r = 0;
    int m = t.length();
    for (int i = 0; i < m; i++){
        r = r * 10 + (t[i] - '0');
        r %= N;
    }
    return r;
}

string getMinimumMultipleOf(int N, string k){
    queue<string> q;
    set<int> visit;
    string t = k;
    q.push(t);
    while (!q.empty()){
        t = q.front();
        q.pop();
        int rem = mod(t, N);
        if (rem == 0)
            return t;
        else if(visit.find(rem) == visit.end()){
            visit.insert(rem);
            q.push(t + "0");
            q.push(t + k);
        }
    }
}

int main(void){
    int n; string k;
    cin>>n>>k;
    cout << getMinimumMultipleOf(n, k);
}
//https://www.hackerrank.com/contests/inzva-algorithm-program-2019-2020-qualification/challenges/havva-and-math
//It's interestingly goin wrong answer.
