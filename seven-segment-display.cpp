#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        string s;
        int stick=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i] == '0')
                stick +=6;
            else if(s[i] == '1')
                stick +=2;
            else if(s[i] == '2')
                stick +=5;
            else if(s[i] == '3')
                stick +=5;
            else if(s[i] == '4')
                stick +=4;
            else if(s[i] == '5')
                stick +=5;
            else if(s[i] == '6')
                stick +=6;
            else if(s[i] == '7')
                stick +=3;
            else if(s[i] == '8')
                stick +=7;
            else if(s[i] == '9')
                stick +=6;
        }
        if(stick%2 == 0){
            char s = '1';
            int times =  stick/2;
            cout << string(times, s);
            cout<<endl;
        }
        else{
            stick = stick - 3;
            char s = '1';
            int times = stick/2;
            cout<<"7"<<string(times, s)<<endl;
            cout<<endl;
        }
    }
}
