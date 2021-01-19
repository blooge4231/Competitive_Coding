#include <bits/stdc++.h>
using namespace std;
void solve(){
    char a;
    int score = 0;
    for(int i = 0; i < 6; i++){
        cin>>a;
        if(a == 'W') score++;
    }

    if(score>=5){
        cout<<1;
    } else if(score>=3){
        cout<<2;
    } else if (score>=1){
        cout<<3;
    } else {
        cout<<-1;
    }
   
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
