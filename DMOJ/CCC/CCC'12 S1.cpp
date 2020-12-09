#include <bits/stdc++.h>
using namespace std;
void solve(){
    int j;
    cin>>j;
    double ans = 0;
    
    if(j<4){
        cout<<ans;
    } else {
        unsigned int n = j-1, r = 3*2*1, nr = n-3;
        double  top = 1, bottom = 1;
        for(int i = 1; i<=n;i++){
            top*=i;
       
        }
      
        if(nr==0){
            bottom = r;
        } else {
            for(int i = 1; i<=nr;i++){
            bottom*= i;
            }
            bottom*=r;
        }
       
       cout<<top/bottom<<endl;

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
