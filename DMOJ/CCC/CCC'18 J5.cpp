#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int pg, dist;

    Node(int PG, int Dist){
        pg = PG;
        dist = Dist;
    }
};

void solve(){  
    vector<vector<int>> arr;
    int n;
    cin>>n;
    bool visited[n];
    for(int i = 0; i < n; i++){
        int mi;
        vector<int> row;
        cin>>mi;
        visited[i] = false;
        for(int j = 0; j < mi; j++){
            int page;
            cin>>page;
            row.push_back(page);
        }
        arr.push_back(row);

    }

    queue<Node> q;
    visited[0] = true;
    q.push(Node(0,1));
    int ans = 10000;
    while(!q.empty()){
        int curr = q.front().pg, dist = q.front().dist;
        q.pop();
    if(arr[curr].empty()){
        ans = min(ans, dist);
        continue;
    } 
        for(int i = 0; i < arr[curr].size(); i++){
            int next = arr[curr][i]-1;
            if(!visited[next]){
                visited[next] = true;
                q.push(Node(next, dist+1));
            }
        }
    
        
    }
    bool perhaps = true;
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            perhaps = false;
            break;
        }
    }

    if(perhaps){
        cout<<"Y"<<endl;
    } else {
        cout<<"N"<<endl;
    }
    cout<<ans;
    


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
