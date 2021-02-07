#include <bits/stdc++.h>
using namespace std;

void solve(){  
    int x, m;
    cin>>x>>m;
    int ans = -1;
    for(int i = 1; i < m; i++){
        if((x*i)%m == 1){
            ans = i;
            break;
        }
    }
    
    if(ans == -1) cout<<"No such integer exists.";
    else {
        cout<<ans;
    }

   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
