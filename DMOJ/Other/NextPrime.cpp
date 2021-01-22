#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; 
    cin>>n;

    for(int i = (n==1) ? 2:n; i <= INT32_MAX; i++){
        bool ye = true;
        if(i>2){
            for(int j = 2; j <= sqrt(i); j++){
            if(i%j==0){
                ye = false;
                break;
            }
        }
        }
        if(ye){
            cout<<i;
            break;
        } 
    }



    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
