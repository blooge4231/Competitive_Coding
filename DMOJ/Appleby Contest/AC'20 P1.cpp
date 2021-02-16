    #include <bits/stdc++.h>
    using namespace std;


    void solve(){
        
        int t;
        cin>>t;
        for(int i = 0; i < t; i++){
            long long s1, s2, s3;
            vector<long long> sides;
            cin>>s1>>s2>>s3;
            sides.push_back(s1);
            sides.push_back(s2);
            sides.push_back(s3);
            sort(sides.begin(), sides.end());
            //cout<<pow(sides[0], 2) + pow(sides[1], 2)<< " " << pow(sides[2], 2);
            if((sides[0]*sides[0])+ (sides[1]*sides[1]) == (sides[2]*sides[2])) {
                cout<<"R"<<"\n";
            } 
            else if ((sides[0]*sides[0])+ (sides[1]*sides[1]) < (sides[2]*sides[2])) {
                cout<<"O"<<"\n";
            } else cout<<"A"<<"\n";

            
        }
         

    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
