#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int> freq;
    for(int i = 0 ; i < n; i++){
        int s;
        cin>>s;
        freq[s]++;
    }


    int max = 0;   
 
    int ans = 0;
    for(int i = 0; i < 51; i++){
        if(i*freq[i] > max){
            max = i*freq[i];
            ans = i;
        }
    }

cout<<ans;



}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
