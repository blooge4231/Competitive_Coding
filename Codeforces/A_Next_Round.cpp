#include <bits/stdc++.h>
using namespace std;
void solve(){
    int tot, last;
    vector<int> list;
    cin>>tot>>last;
    for(int i = 0; i<tot;i++){
        int test;
        cin>>test;
        list.push_back(test);
    }
    int score = list[last-1];
    int s = 0;
    for(int k = 0; k<tot; k++){
        if(list[k]>=score&&list[k]!=0){
            s++;
        }
    }
    cout<<s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
