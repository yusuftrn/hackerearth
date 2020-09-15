#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s; int c=0;
    cin>>s;
    int sLen = s.length();
    for(int i=0;i<sLen;i++){
        if(s[i] != s[sLen - i - 1]){
            c = 1;
            break;
        }
    }

    if(c)
        cout<<"NO";
    else
        cout<<"YES";
}
