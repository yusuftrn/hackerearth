#include <bits/stdc++.h>
using namespace std;
void seat(){
    int N; cin >> N;
    vector<string> ans = {"WS", "MS", "AS"};
    vector<int> face = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int f = (N - 1) / 12;
    int opp = face[(N - 1) % 12] + f * 12 + 1;
    if ((N - 1) % 6 < 3){
        cout << opp << " " << ans[(N - 1) % 3];
    }else{
        cout << opp << " " << ans[2 - (N - 1) % 3];
    }

}
int main(void){
    int T; cin >> T;
    for (int i = 1; i <= T; i++){
        seat();
        cout << '\n';
    }
}
