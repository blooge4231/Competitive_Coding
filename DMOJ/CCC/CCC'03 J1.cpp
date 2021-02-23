    #include <bits/stdc++.h>
    using namespace std;


    void solve(){
        short int t, s, h;
        cin>>t>>s>>h;
        for(short int i = 0; i < t; i++){
            cout<<"*";
            for(short int j = 0; j < s; j++){
                cout<<" ";
            }

            cout<<"*";
            for(short int j = 0; j < s; j++){
                cout<<" ";
            }
            cout<<"*"<<"\n";
        }

        for(short int i = 0; i < s*2 + 3; i++){
            cout<<"*";
        }
        cout<<"\n";
        for(short int i = 0; i < h; i++){
            for(short int j = 0; j < s+1; j++){
                cout<<" ";
            }
            cout<<"*"<<"\n";
        }

    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cout<<fixed<<setprecision(1);
        cin.tie(0);
        solve();
        return 0;
    }
