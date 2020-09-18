#include <bits/stdc++.h>
using namespace std;
int main(void){
    int sum=0;
    string s;
    cin >> s;
    for(int i=0; i<s.length();i++){
        sum += s[i]-96;
    }
    cout<<sum;
}
