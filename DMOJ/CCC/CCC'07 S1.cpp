    #include <bits/stdc++.h>
    using namespace std;
    
    void solve(){
        int ppl;
        cin>>ppl;
        for(int i = 0; i<ppl;i++){
            int year, month, day;
            cin>>year>>month>>day;
            if(2007-year>18){
                cout<<"Yes"<<'\n';
            } else if(2007-year==18){
                if(month<2){
                    cout<<"Yes"<<'\n';
                } else if(month==2&&day<=27) {
                    cout<<"Yes"<<'\n';
                } else {
                    cout<<"No"<<'\n';
                }
            } else {
                cout<<"No"<<'\n';
            }
        }
    }
 
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
