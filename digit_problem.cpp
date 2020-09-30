#include <bits/stdc++.h>
using namespace std;

int main(void) {
    char c[20]; cin>>c;
    int k; cin>>k;
    for(int i=0; i<k; i++) {
        if(c[i] == '9') {
            k++;
        }
        else c[i] = '9';
    }
    cout<<c;
}
