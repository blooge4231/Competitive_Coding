    #include <bits/stdc++.h>
    using namespace std;

    long long re(unsigned int h, unsigned int m){

        for(int i = 1; i <= m; i++){
            if(((-6*pow(i, 4)) + (h*pow(i, 3)) +(2*pow(i, 2)) + i) <= 0){
                return i;
            }

        }
        return -1;


    }

    void solve(){
        unsigned int h, m;
        cin>>h>>m;

        if(re(h, m) == -1) cout<< "The balloon does not touch ground in the given time."<<"\n";
        else {
            cout<<"The balloon first touches ground at hour:"<<"\n"; 
            cout<<re(h, m)<<"\n";
        }

    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cout<<fixed<<setprecision(1);
        cin.tie(0);
        solve();
        return 0;
    }
