        #include <bits/stdc++.h>
    
        using namespace std;
    
        void solve(){
            int n; 
            long double maxSpeed = -1; 
            cin>>n;
            vector<pair<double, double>> points;
            for(int i = 0 ; i<n;i++){
                double a, b;
                cin>>a>>b;
                points.push_back({a,b});   
            }

            sort(points.begin(),points.end());
            pair<double,double> current = points[0];
            for(int j = 1; j <points.size();j++){
                pair<double,double> nextCur = points[j];
                double run = nextCur.first-current.first;
                double rise = abs(nextCur.second-current.second);
                long double speed = rise/run;
                maxSpeed = max(maxSpeed, speed);
                current = nextCur;
            }
            
            cout<<maxSpeed;
            

        }
        
        
        
        int main(){
            cout<<setprecision(14)<<fixed;
            ios::sync_with_stdio(0);
            cin.tie(0); cout.tie(0);
            solve();
            return 0;
        }

        
