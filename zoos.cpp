#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int z=0, o=0;
    for(int i=0;i<=s.length();i++){
        if(s[i] == 'z')
            z++;
        else if(s[i] == 'o')
            o++;
    }
    if(o == 2*z)
        cout<<"Yes";
    else
        cout<<"No";
}
