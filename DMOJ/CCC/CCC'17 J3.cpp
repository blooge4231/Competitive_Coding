    #include <bits/stdc++.h>
    using namespace std;
    void solve(){
        int x, y, c, d, t;

        cin>>x>>y>>c>>d>>t;

        int distance = abs(x-c) + abs(y-d);

        if(distance <=t && (t-distance) % 2 == 0){
            cout<<"Y"<<"\n";
        } else {
            cout<<"N"<<"\n";
        }

    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        //cout<<fixed<<setprecision(1);
        cin.tie(0);
        solve();
        return 0;
    }
