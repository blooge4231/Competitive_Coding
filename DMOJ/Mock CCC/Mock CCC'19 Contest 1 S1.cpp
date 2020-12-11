#include <bits/stdc++.h>
using namespace std;
void solve(){
    double n, k = 0;
    cin>>n;
    for(int i = 0; i<n;i++){
        double s;
        cin>>s;
        k+=s;
    }
    cout<<k/n<<endl;


}

int main(){
    ios::sync_with_stdio(0);
    cout<<fixed<<setprecision(1);
    cin.tie(0);
    solve();
    return 0;
}
