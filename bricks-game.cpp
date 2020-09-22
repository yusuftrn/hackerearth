#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m=0;
    cin>>n;
    for(int i=1;i<n+1;i++){
        m+=i;
        if(m>=n){
            cout<<"Patlu"<<endl;
            break;
        }
        m+=i*2;
        if(m>=n){
            cout<<"Motu"<<endl;
            break;
        }
    }
}
