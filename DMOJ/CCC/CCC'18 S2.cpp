    #include <bits/stdc++.h>
    using namespace std;

    vector<vector<int>> rotate(vector<vector<int>> arr, int n){
        vector<vector<int>> test = arr;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                test[i][j] = arr[j][n-i-1];
            }
        }

        return test;  
    }


    void solve(){
        int n;
        cin>>n;
        vector<vector<int>> grid;

        for(int i = 0; i < n; i++){
            vector<int> temp;
            for(int j = 0; j < n; j++){
                int s;
                cin>>s;
                temp.push_back(s);
            }
            grid.push_back(temp);
        }
        
        while(1){
            
            if(grid[0][0] < grid[0][1] && grid[0][0] < grid[1][0]){
                break;
            }
            
            grid = rotate(grid, n);
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
        


    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
