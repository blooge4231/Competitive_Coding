    #include <bits/stdc++.h>
    using namespace std;
    
    void solve(){
        int k;
        string e;
        cin>>k>>e;
        string d = "";
        for(int i = 1; i<=e.length();i++){
            char shift = e[i-1]-((3*i)+k); 
            if(shift>='A'){
                d += shift;
            } else {
                d += 'Z'+1-('A'-shift);
            }
        }
        cout<<d;
    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
