#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> list;
    for(int i = 0; i < n; i++){
        int b;
        cin>>b;
        list.push_back(b);
    }
    sort(list.begin(),list.end());

    for(int a : list){
        cout<<a<<endl;
    }
 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
