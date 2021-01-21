#include <bits/stdc++.h>
using namespace std;

void solve(){
    int s;
    cin>>s;

    for(int i = 0; i < s; i++){
        for(int j = 0; j < 3*s; j++){
            if(j<s||j>=2*s){
                cout<<'*';
            } else {
                cout<<'x';
            }
        }
        cout<<endl;
    }
    for(int i = 0; i < s; i++){
        for(int j = 0; j < 3*s; j++){
            if(j<s){
                cout<<' ';
            } else {
                cout<<'x';
            }
        }
        cout<<endl;
       
    }
    for(int i = 0; i < s; i++){
        for(int j = 0; j < 3*s; j++){
            if(j<s||j>=2*s){
                cout<<'*';
            } else {
                cout<<' ';
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
