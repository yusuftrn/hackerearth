#include <bits/stdc++.h>
using namespace std;

int checkS(char s1, char s2){
    int c = 0;
    if(s2=='a'||s2=='e'||s2=='i'||s2=='o'||s2=='u')
        if(s1=='a'||s1=='e'||s1=='i'||s1=='o'||s1=='u')
            c=0;
        else
            c=1;
    return c;
}
int main(void){
    int T, N;
    cin>>T;
    while(T--){
        int c=0;
        cin>>N;
        string s;
        s[N];
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(checkS(s[i],s[i+1]))
                c++;
        }
        cout<<c<<endl;
    }
}
