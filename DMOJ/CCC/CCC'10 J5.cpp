#include <bits/stdc++.h>
using namespace std;

class SQ{
    public:
    int x, y, m;

    SQ(int X, int Y, int M){
        x = X;
        y = Y;
        m = M;
    }

};


void solve(){
    int sr, sc, er, ec;
    cin>>sr>>sc>>er>>ec;
    int moves[8][8] = {{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1},{-2,1},{-1,2}};
    bool visited[9][9];
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <=8; j++){
            visited[i][j] = false;
        }
    }
    queue<SQ> spot;
    spot.push(SQ(sr,sc,0));
    visited[sr][sc] = true;
    while(!spot.empty()){
        int r = spot.front().x, c = spot.front().y, m = spot.front().m;
        spot.pop(); 
        if(r==er&&c==ec){
            cout<<m;
            break;
        }
        for(int i = 0; i < 8; i++){
            int tr = r+moves[i][0], tc = c+moves[i][1];
            if(tr<1||tc<1||tr>8||tc>8||visited[tr][tc]) continue;
                visited[tr][tc] = true;
                spot.push(SQ(tr,tc,m+1));
        }

    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
