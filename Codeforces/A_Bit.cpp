#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, ans = 0;
    cin>>n;
    for(int i = 0 ; i<n;i++){
        string s;
        cin>>s;
        if(s.compare("++X")==0||s.compare("X++")==0){
            ans++;
        } else {
            ans--;
        }
    }
    cout<<ans;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
