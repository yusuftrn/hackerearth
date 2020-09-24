#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,x,y;
    cin>>n;
    cin>>x;
    while(n--){
        cin>>y;
        if(y>=x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
