#include <bits/stdc++.h>
using namespace std;

void fLast(vector<long> &ar,int l){
    for(int i=0;i<=l;++i){
        while(ar[i]>9){
            ar[i]/=10;
        }
    }
}
void fFirst(vector<long> &ar , int start , int end){
    for(;start<end;++start){
        ar[start]%=10;
    }
}

int main(void){
    int n, mid=0, res=0, mod=0;
    cin>>n;
    mid = n/2;
    vector<long> A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];
    fLast(A,mid-1);
    fFirst(A,mid,n);
    for(int i=0;i<n;i++)
        if(i%2==0)
            res+=A[i];
        else
            mod+=A[i];
    if((res-mod)%11 == 0)
        cout<<"OUI";
    else
        cout<<"NON";
}
