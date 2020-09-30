#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ll t; cin>>t;
    string s;
    while(t--){
        ll sum = 0;
        cin>>s;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' || s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
                /*
                 * logic behind (n-i)*(1+i):
                 * Bu formul oluşturulabilecek alt dizilerin toplamını verir.
                 * Zaten yukarıda sesli harfleri aldığımız için
                 * sum verisine direkt ekleyebiliriz.
                 */
                sum +=(s.length() - i)*(i+1);

            }
        }
        cout<<sum<<endl;
    }
}
