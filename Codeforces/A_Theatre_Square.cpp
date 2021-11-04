#include <bits/stdc++.h>
using namespace std;

void solve(){
    double n, m, a;
    cin>>n>>m>>a;
    long long ans = ceil(n/a)*ceil(m/a);
    cout<<ans<<'\n';
}

int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
}