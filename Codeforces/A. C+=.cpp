#include <bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin>>t;
    for(int i = 0 ; i<t;i++){
        int a, b, c;
        int ops=0;
        bool is = false;

        cin>>a>>b>>c;
        while(is==false){
            if(a>c||b>c){
                is=true;
            } else {
                if(a<b){
                a+=b;
                ops++;
            } else {
                b+=a;
                ops++;
            }
           
            }
            
        }
        
            cout<<ops<<'\n';

        
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
