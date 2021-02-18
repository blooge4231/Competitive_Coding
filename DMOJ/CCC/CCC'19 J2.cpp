    #include <bits/stdc++.h>
    using namespace std;
    void solve(){
        int s;
        cin>>s;

        for(int i = 0; i < s; i++){
            int num;
            char t;
            cin>>num>>t;
            for(int j = 0; j < num; j++){
                cout<<t;
            }
            cout<<"\n";
        }
    } 
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
