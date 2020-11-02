#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, i, j;
    cin>>n;
    for(i = 4 ; i<n;i++){
        j = n-i;
        if((i%3==0||i%2==0)&&(j%3==0||j%2==0)){
         
            break;
        }
    }
    cout<<i<<" "<<j;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
