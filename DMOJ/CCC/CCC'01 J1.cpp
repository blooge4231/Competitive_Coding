#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int half = n/2 + 1;
    for(int i = 0; i < half; i++){
        int spaces = n*2 - 2*(1+(2*i));
        for(int j = 0; j < n*2; j++){
            if(i == half-1){
                cout<<"*";
            } else{
            if(j<1+(2*i) || j>spaces+(2*i)){
                cout<<"*";
            } else {
                cout<<" ";
            }
            }
            
        }
        cout<<endl;
    }
for(int i = half-2; i >= 0; i--){
        int spaces = n*2 - 2*(1+(2*i));
        for(int j = 0; j < n*2; j++){
            if(i == half-1){
                cout<<"*";
            } else{
            if(j<1+(2*i) || j>spaces+(2*i)){
                cout<<"*";
            } else {
                cout<<" ";
            }
            }
            
        }
        cout<<endl;
    } 

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
