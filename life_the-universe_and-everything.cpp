#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y,x = 10000;
    int flag = 0;
    for(int i=0;i<x;i++){
        cin>>y;
        if(y!=42 && flag == 0) {
            cout<<y<<endl;
        }else if(y==42){
            flag = 1;
        }
    }
}
