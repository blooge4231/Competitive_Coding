#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    int sum = n;
    for(int i = 1; i<=k; i++){
        sum+= n*pow(10,i);
    }
    cout<<sum;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
