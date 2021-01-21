#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t, c;
    cin>>t>>c;
    vector<int> chores;
    for(int i = 0; i < c; i++){
        int s;
        cin>>s;
        chores.push_back(s);
    }
    sort(chores.begin(),chores.end());
    int cho = 0;
    int sum = 0;
    for(int i = 0; i < c && sum <=t; i++){
        sum+=chores[i];
        cho++;
    }
    if(sum>t) {
        cout<<cho-1;
    } else {
        cout<<cho;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
