#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<vector<int>> grid = {{1,2},{3,4}};

    string s;
    cin>>s;

    for(int i = 0; i < s.length(); i++){
        int a = grid[0][0];
        int b = grid[0][1];
        int c = grid[1][0];
        int d = grid[1][1];
        if(s[i]=='V'){
            grid[0][0] = b;
            grid[0][1] = a;
            grid[1][0] = d;
            grid[1][1] = c;
        } else if(s[i]=='H'){
            grid[0][0] = c;
            grid[0][1] = d;
            grid[1][0] = a;
            grid[1][1] = b;
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j< 2; j++){
            cout<<grid[i][j]<<" ";
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
