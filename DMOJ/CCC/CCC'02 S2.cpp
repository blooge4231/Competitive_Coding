    #include <bits/stdc++.h>
    using namespace std;
    
    void solve(){
        int num, denom;
        cin>>num>>denom;
        int c = 1;

        if(num%denom==0){
            cout<<(num/denom);
        } else {
            while(c*denom<num){
                c++;
            }
            c-=1;
            int b = num%denom;
            for(int i = 2 ; i<denom;i++){
                if(b%i==0&&denom%i==0){
                b /= i;
                denom/=i;
                i = 2;      
             } 
            }
            if(c!=0){
                cout<<c<<" "<<b<<"/"<<denom;
            } else {
                cout<<b<<"/"<<denom;
            }
            
        }
    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
