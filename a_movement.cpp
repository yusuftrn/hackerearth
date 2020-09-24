#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,step=0;
    cin>>n;
    while(n>5)
    {
        step++;
        n=n-5;
    }
    cout<<step+1;
}
