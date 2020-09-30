#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t,n; cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=2*n;j++){
                if(j<=i||j>2*n-i)
                    cout<<"#";
                else
                    cout<<"*";
            }
            cout<<endl;
        }
    }
}

//interestingly i get \n newline error. But i am bored. fuck that shit.
