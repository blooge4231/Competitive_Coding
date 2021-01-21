#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a3 , a2, a1, b3, b2, b1;
    cin>>a3>>a2>>a1>>b3>>b2>>b1;

    if((a3*3)+(a2*2)+a1>(b3*3)+(b2*2)+b1) cout<<"A";
    else if((a3*3)+(a2*2)+a1<(b3*3)+(b2*2)+b1) cout<<"B";
    else cout<<"T";

    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
