#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    int n, f = -1;
    ll sum = 0; cin>>n;
    int arr[n];
    int m = pow(10,10);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    for(int i=0;i<n;i++) {
        if((sum - arr[i])%7 == 0 && m>arr[i]){
            m = arr[i];
            f = i;
        }
    }
    cout<<f;
}
