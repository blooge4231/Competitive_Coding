#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> m, low;
    for(int i = 0; i < n; i++){
        int b;
        cin>>b;
        m.push_back(b);
    }

    sort(m.begin(), m.end());
    int ind;
    if(n%2==0) ind = (n/2);
    else ind = (n/2)+1;
    for(int i = 0; i < ind;i++){
        int a = m.front();
        low.push_back(a);
        m.erase(m.begin());
    }
    sort(low.begin(), low.end());
    for(int i = 0; i < n; i++){
        if(i%2==0){
            cout<<low.back()<<" ";
            low.pop_back();
        } else {
            cout<<m.front()<<" ";
            m.erase(m.begin());
        }
    }



    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
