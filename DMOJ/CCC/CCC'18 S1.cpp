    #include <bits/stdc++.h>
    using namespace std;
    void solve(){
        int n;
        cin>>n;
        vector<double> vil;
        for(int i = 0; i < n; i++){
            double s;
            cin>>s;
            vil.push_back(s);
        }
        double min = -1;
        sort(vil.begin(), vil.end());

        for(int i = 0; i < n-1; i++){
            double test = (abs(vil[i]-vil[i+1])/2) + ((abs(vil[i+1]-vil[i+2]))/2);
            if(test<min|| min == -1) min = test;
        }
        cout<<min<<"\n";

    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cout<<fixed<<setprecision(1);
        cin.tie(0);
        solve();
        return 0;
    }
