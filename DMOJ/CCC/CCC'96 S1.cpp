#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int c;
        cin>>c;
        int sum = 0;
        for(int j = 1; j < c; j++){
            if(c%j==0){
                sum+=j;
            }
        }

        if(sum==c){
            cout<<c<<" is a perfect number."<<endl;
        } else if (sum>c){
            cout<<c<<" is an abundant number."<<endl;
        } else if (sum<c){
            cout<<c<<" is a deficient number."<<endl;
        }

    }





}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
