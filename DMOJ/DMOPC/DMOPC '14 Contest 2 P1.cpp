#include <bits/stdc++.h>
using namespace std;
void solve(){  
    int d, day = 1;
    cin>>d;
    for(int i = 0; i < d; i++){
        int t, sum = 0;
        cin>>t;
        if(t == 0){
            cout<<"Weekend"<<"\n";

        } else {
            for(int j = 0; j < t; j++){
                int a;
                cin>>a;
                sum+=a;
            }
            cout<<"Day " << day <<": "<< sum<<"\n";
        }
        day++;
    }
   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
