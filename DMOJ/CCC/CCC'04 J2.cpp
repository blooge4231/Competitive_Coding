#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x, y;
    cin>>x>>y;
    cout<<"All positions change in year "<<x<<endl;
    for(int i = 1; (i*60)+x<=y;i++){
        cout<<"All positions change in year "<<(i*60)+x<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
