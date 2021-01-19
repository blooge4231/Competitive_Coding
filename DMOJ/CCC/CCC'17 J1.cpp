#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b;
    cin>>a>>b;
    
    if(a>0){
        if(b>0){
            cout<<"1";
        } else {
            cout<<"4";
        }
    } else if(a<0){
        if(b>0){
            cout<<"2";
        } else {
            cout<<"3";
        }
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
