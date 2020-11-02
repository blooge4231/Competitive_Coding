#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, height = 0;
    cin>>n;
    int factor = 1;

    for(int i = n; i>0;i-=factor){
        height++;
        factor+=height+1;
    }
    cout<<height;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
