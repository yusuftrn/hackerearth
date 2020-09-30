#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long n,count=0, smallest=999999;
    cin >> n;
    long a[n],b[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]!=smallest){
            if(a[i]>=b[i]){
                if((a[i]-smallest)%b[i] == 0){
                    count+= ((a[i]-smallest)/b[i]);
                }
                else{
                    count=-1;
                    break;
                }
            }
            else{
                count=-1;
                break;
            }
        }
    }
    cout<<count;
}
