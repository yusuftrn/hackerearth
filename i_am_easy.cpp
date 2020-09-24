#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,temp;
    cin>>n;
    temp =n;
    for(int i=1;i<=10;i++){
        n*=i;
        cout<<n<<endl;
        n=temp;
    }

}
