#include <bits/stdc++.h>
using namespace std;
void solve(){
    int m, n;
    cin>>m>>n;
    int c = 0;
    int grid = m*n;
    for(int i = 2; i<=grid;i+=2){
        c++;
    }
    cout<<c;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
