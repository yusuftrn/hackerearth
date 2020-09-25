#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll x = 10000;
    int y;
    int flag = 0;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        if(y!=42 && flag == 0) {
            cout<<y<<endl;
        }else if(y==42){
            flag = 1;
        }
    }
}
