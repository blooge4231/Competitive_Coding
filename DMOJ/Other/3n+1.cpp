    #include <bits/stdc++.h>
    using namespace std;

    void solve(){
        long long s;
        int count = 0;
        cin>>s;
        while(s!=1) {
            if(s%2 == 0) {
                s >>= 1;
                //out<<s<<endl;
            } else {
                s = (s*3) + 1;
            }
            ++count;
        }

        cout<<count<<"\n";

    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        //cout<<fixed<<setprecision(1);
        cin.tie(0);
        solve();
        return 0;
    }
