#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int x = ~n;
        n=(x^(x&(x-1)))|n;
        cout << n << endl;
    }
}
