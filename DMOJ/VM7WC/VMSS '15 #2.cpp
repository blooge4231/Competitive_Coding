#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> grid;
vector<vector<bool>> visited;

void DFS(int r, int c){
    if(r<0||c<0||r>=grid.size()||c>=grid[r].size()||visited[r][c]==true||grid[r][c]=='X') return;
    visited[r][c] = true;
    DFS(r+1,c);
    DFS(r-1, c);
    DFS(r, c+1);
    DFS(r, c-1);
   
}
void solve(){
   int r, c;
   cin>>r>>c;
   for(int i = 0; i < r; i++){
       vector<bool> one;
       vector<char> two;
       for(int j = 0; j < c; j++){
           one.push_back(false);
           char s;
           cin>>s;
           two.push_back(s);
           
        }
        grid.push_back(two);
        visited.push_back(one);
    }
    int tres = 0;
    for(int i = 0; i < r; i++){
       for(int j = 0; j < c; j++){
           
           if(visited[i][j]==false&&grid[i][j]=='.'){
               tres++;
               DFS(i,j);
           }

        }
    }

    cout<<tres;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
