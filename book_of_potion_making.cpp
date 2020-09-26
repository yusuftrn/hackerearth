#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    int sum = 0;
    cin >> n;
    for(int i=0;i<n.length();i++){
        sum += (int(n[i])*(i+1));
    }
    if(sum%11 == 0)
        cout<<"Legal ISBN";
    else
        cout<<"Illegal ISBN";
}
