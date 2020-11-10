    #include <bits/stdc++.h>
    using namespace std;
    
    class Grid{
        public:
        int r, c;   
    };

    bool checked [1001][1001];
    //vals[1] returns grids that have a value of 1
    vector<vector<Grid>> vals(1000001);

    string possible(Grid last_spot){
        queue<Grid> q;
        q.push(last_spot);
        while(q.size()>0){
            Grid grid = q.front();
            q.pop();
            vector<Grid> paths = vals[grid.r*grid.c];
            for(Grid path:paths){
                if(path.r==1&&path.c==1){
                    return "yes";
                } else if(!checked[path.r][path.c]) {
                    checked[path.r][path.c] = true;
                    q.push(path);
                }
            }
        }
        return "no";
    }

    void solve(){
       int m, n;
       cin>>m>>n;
       Grid target;
       for(int i = 1; i<=m;i++){
           for(int j = 1; j<=n;j++){
               int num;
               cin>>num;
               Grid grid;
               grid.r = i, grid.c = j;
               vals[num].push_back(grid);

               if(i==m&&j==n){
                   target = grid;
               }
           }

       } 
        
       cout<<possible(target); 
    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
