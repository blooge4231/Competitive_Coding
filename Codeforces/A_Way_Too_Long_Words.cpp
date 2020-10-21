#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    cin>>a;
    for(int i = 0; i<a;i++){
        string n;
        cin>>n;
        if(n.length()<=10){
            cout<<n<<'\n';
        } else {
            cout<<n.at(0)<<n.length()-2<<n.at(n.length()-1)<<'\n';
        }       
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
