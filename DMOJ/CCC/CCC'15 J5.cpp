#include <bits/stdc++.h>
using namespace std;
vector<vector<vector<int>>> visited;
int rec(int n, int k, int min){
    if(visited[n][k][min] == 0){
        if(n==k||k==1) {
            visited[n][k][min] = 1;
        }
        else {
            int x = 0;
            for(int i = min; i<=n/k; i++){
                x = x + rec(n-i, k-1, i);
            }
            visited[n][k][min] = x;
        }
    }
    return visited[n][k][min];
    
}

void solve(){  

    int n, k;
    cin>>n>>k;
    
        for(int i = 0; i <= n; i ++){
            vector<vector<int>> line;

            for(int b = 0; b <= k; b++){
                vector<int> x;
                for(int c = 0; c <= n; c++){
                    x.push_back(0);
                }
            line.push_back(x);

            }
        visited.push_back(line);

        }

        int ans = rec(n, k, 1);
        cout<<ans;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
