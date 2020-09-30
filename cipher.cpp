#include <bits/stdc++.h>
using namespace std;

/*
 * http://www.asciitable.com/
 * We used decimal form of char variables.
 * Check ASCII Table.
 */

int main(void){
    string s; cin>>s;
    int k,m,n,p;
    cin>>k;
    unsigned int i;

    //Big Alpha
    for(i=0;i<s.length();i++){
        if(s.at(i)>=65 && s.at(i)<=90){
            m=s.at(i);
            if((m+k)>90){
                m+=k;
                while(m>90){
                    m-=26;
                }
            }
            else{
                m +=k;
            }
            s.at(i)=m;
        }
        //Small Alpha
        else if(s.at(i)>=97 && s.at(i)<=122){
            n=s.at(i);
            if((n+k)>122){
                n+=k;
                while(n>122){
                    n-=26;
                }
            }
            else {
                n+=k;
            }
            s.at(i)=n;
        }
        //Digit
        else if(s.at(i)>='0' && s.at(i)<='9'){
            p=s.at(i);
            if((p+k)>'9')
            {p=(p+k);
                while(p>'9'){
                    p-=10;
                }
            }
            else {
                p+=k;
            }
            s.at(i)=p;
        }
    }
    cout<<s;
}
