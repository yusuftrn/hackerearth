#include <bits/stdc++.h>
using namespace std;

int main(){
    long int N,T;
    cin>>T>>N;
    for(auto i=0;i<T;i++){
        while(1){
            if(N==1){
                cout<<"YES"<<endl;
                break;
            }
            if(N%2==0){
                N=N/2;
            }else{
                N=(3*N)+1;
            }
        }
    }
}
