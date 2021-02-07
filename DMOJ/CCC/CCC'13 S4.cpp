#include <bits/stdc++.h>
using namespace std;

int BFS(vector<vector<int>> a, int p, int q){
    bool visited[a.size()] = {false};
    queue<int> yes;
    for(int x : a[p]){
        yes.push(x);
        visited[x] = true;
        while(!yes.empty()){
             int testP = yes.front(); 
             yes.pop();

             if(testP == q){
                 return 1;
             } else {
                for(int k : a[testP]){
                    if(visited[k]) continue;
                    visited[k] = true;
                    yes.push(k);
                }
             }
        }

    }
    return -1;
}

void solve(){  
    
    int n, m;
    cin>>n>>m;
    if(n == 1) cout<<"yes"<<endl;
    else {
    vector<vector<int>> a;
    for(int i = 0; i < n; i++) {
        vector<int> yes;
        a.push_back(yes);
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin>>x>>y;
        a[x-1].push_back(y-1);
    }

    int p, q;
    cin>>p>>q;
    int ans = BFS(a, p-1, q-1);
    
    if(ans == 1) {
        cout<<"yes"<<endl;
    } else if(ans == -1){
        ans = BFS(a, q-1, p-1);
        if(ans == -1){
            cout<<"unknown"<<endl;
        } else if (ans == 1){
            cout<<"no"<<endl;
        }
    }
    
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
