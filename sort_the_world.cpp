#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s; cin>>s;
    vector<char> up;
    vector<char> low;
    for(int i=0; i<s.length();i++){
        if(isupper(s[i]))
            up.push_back(s[i]);
        if(islower(s[i]))
            low.push_back(s[i]);
    }
    sort(up.begin(), up.end());
    sort(low.begin(), low.end());
    for(int i=0; i < up.size(); i++)
        cout << up.at(i);
    for(int i=0; i < low.size(); i++)
        cout << low.at(i);
}
//https://www.hackerrank.com/contests/inzva-algorithm-program-2019-2020-qualification/challenges/sort-the-word/problem
