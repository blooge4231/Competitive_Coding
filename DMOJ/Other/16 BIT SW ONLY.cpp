#include <bits/stdc++.h>
using namespace std;


void solve(){  
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        long long a, b, p;
        cin>>a>>b>>p;

        if(a*b==p){
            cout<<"POSSIBLE DOUBLE SIGMA"<<endl;
        } else {
            cout<<"16 BIT S/W ONLY"<<endl;
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
