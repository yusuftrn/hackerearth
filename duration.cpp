#include <bits/stdc++.h>
using namespace std;

void calcDuration(){
    int h1,m1,h2,m2,hm1=0,hm2=0;
    cin>>h1>>m1>>h2>>m2;
    hm1=h1*60+m1;
    hm2=h2*60+m2;
    int hm=hm2-hm1;
    cout<<hm/60<<' '<<hm%60<<endl;
}
int main(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
        calcDuration();
}
