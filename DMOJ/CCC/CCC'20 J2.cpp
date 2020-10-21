#include <bits/stdc++.h>
using namespace std;
void solve(){
    int p, n, r;
    cin>>p>>n>>r;
    int trans = 0;
    int days = 0;
    int sum = 0;
    while(sum<p){
        trans=n*pow(r,days);
        sum+=trans;
        if(sum<=p){
         days++;
        }

       
    }
    cout<<days;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
