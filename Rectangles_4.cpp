#include<bits/stdc++.h>
using namespace std;

bool rotate(int n, int w[], int h[]){
    int m = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (max(w[i], h[i]) <= m)
            m = max(w[i], h[i]);
        else if (min(w[i], h[i]) <= m)
            m = min(w[i], h[i]);
        else {
            return 0;
        }
    }
    return 1;
}

int main(void){
    int n; cin>>n;
    int w[n], h[n];
    for(int i=0; i<n;i++)
        cin>>w[i]>>h[i];
    if(rotate(n,w,h))
        cout<<"YES";
    else
        cout<<"NO";
}
//https://www.hackerrank.com/contests/inzva-algorithm-program-2019-2020-qualification/challenges/rectangles-4
