#include <bits/stdc++.h>
using namespace std;

int main(void){
    int L;
    cin>>L;
    int T;
    cin>>T;
    while (T--){
        pair<int,int> p;
        cin>>p.first>>p.second;
        if(p.first<L || p.second<L)
            cout<<"UPLOAD ANOTHER"<<endl;
        else if((p.first>=L && p.second>=L) && (p.first == p.second))
            cout<<"ACCEPTED"<<endl;
        else
            cout<<"CROP IT"<<endl;
    }
}
