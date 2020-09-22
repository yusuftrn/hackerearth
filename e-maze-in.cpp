#include <bits/stdc++.h>
using namespace std;
int main(){
    char num[200],a=0,b=0;
    scanf("%s",num);
    for(int i=0;num[i]!='\0';i++){
        if(num[i]=='L'){
            a--;
        }
        else if(num[i]=='D'){
            b--;
        }
        else if(num[i]=='R'){
            a++;
        }
        else if(num[i]=='U'){
            b++;
        }
    }
    printf("%d %d",a,b);
}
