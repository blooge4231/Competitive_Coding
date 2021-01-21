#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n, c = 0;
    cin>>m>>n;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(j+i==10) c++;
        }
    }
    
    if(c==1){
        cout<<"There is 1 way to get the sum 10.";
    } else {
        cout<<"There are "<<c<<" ways to get the sum 10.";
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
