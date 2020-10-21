#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    int c = 0;
    cin>>a;
    for(int i = 0; i<a;i++){
        int one, two, three;
        cin>>one>>two>>three;
        if(one+two+three>=2){
            c++;
        }
    }
    cout<<c;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
