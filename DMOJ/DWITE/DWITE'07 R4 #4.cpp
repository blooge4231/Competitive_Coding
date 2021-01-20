#include <bits/stdc++.h>
using namespace std;

char grid[11][11];
bool visited[11][11];
int moves[8][8] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
class Point{
    public:
    int R, C, DIST;
    Point(int r,int c, int dist){
        R = r;
        C = c;
        DIST = dist;
    }
};

void solve(){
    for(int i = 0; i < 5; i++){
        //input
        int er = -1, ec = -1, sr = -1, sc = -1;
        for(int j = 0; j < 10; j++){
            for(int k = 0 ; k < 10; k++){
                visited[j][k] = false;
                cin>>grid[j][k];
                if(grid[j][k]=='X'){
                    if(sr == -1){
                        sr = j, sc = k;
                    } else {
                        er = j, ec = k;
                    }

                } 
            }
        }

        string delim;
        cin>>delim;
        queue<Point> p;
        p.push(Point(sr,sc,0));

        while(p.size()!=0){
            int r = p.front().R, c = p.front().C, dist = p.front().DIST; 
            p.pop();
            if(r==er&&c==ec){
                cout<<dist<<endl;
                break;
            }

            for(int j = 0; j < 8; j++){
                int nr = r + moves[j][0], nc = c + moves[j][1];
                if(nr<0||nc<0||nr>=10||nc>=10||visited[nr][nc]==true||grid[nr][nc]=='#') continue;
                visited[nr][nc] = true;
                p.push(Point(nr,nc,dist+1));
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
