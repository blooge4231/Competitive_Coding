#include <bits/stdc++.h>
using namespace std;
void solve(){
    int s,m,l;
    cin>>s>>m>>l;
    int happy = s+(2*m)+(3*l);
    if(happy>=10){
        cout<<"happy";
    } else {
        cout<<"sad";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
