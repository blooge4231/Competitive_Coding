#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> rocks;

    for(int i = 0 ; i < n; i++){
        int s;
        cin>>s;
        rocks.push_back(s);
    }

    sort(rocks.begin(), rocks.end());

    int max = 0;   
    int yes = rocks[0];
    int c = 1;
    int ans = 0;
    for(int i = 1; i < rocks.size(); i++){
        int r = rocks[i];
        if(r==yes){
            c++;
        } else if (r!=yes){
            if(max < c*yes){
                max = c*yes;
                ans = yes;
            }
            yes = r;
            c = 1;
        } 

        if(i+1==rocks.size()){
            if(max < c*yes){
                max = c*yes;
                ans = yes;
            }
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
