#include <bits/stdc++.h>
using namespace std;


class Shot{
    public:
    int dist, hit;

    Shot(int D, int H) {
        dist = D;
        hit = H;
    }

};

int find(int clubs [], int d, int sticks){
    map<int, bool> visited;
    queue<Shot> pos;
    for(int i = 0; i < sticks; i++){
        pos.push(Shot(clubs[i], 1));
        visited[clubs[i]] = true;
    }
    while(!pos.empty()){
        int distance = pos.front().dist, hit = pos.front().hit;
        pos.pop();
        if(distance == d){
            return hit;
        }
        for(int i = 0 ; i < sticks; i++){
            int dis = distance + clubs[i], hit1 = hit + 1;
            
            if(visited[dis]||dis>d) continue;

            visited[dis] = true;
            pos.push(Shot(dis, hit1));
        }
    }
    return -1;

}

void solve(){  

    int d, c;
    cin>>d>>c;
    int clubs[c];
    for(int i = 0; i < c; i++){
        int a;
        cin>>a;
        clubs[i] = a;
    }
    int ans = find(clubs, d, c);
    if(ans == -1){
        cout<<"Roberta acknowledges defeat.";
    } else {
        cout<<"Roberta wins in "<<ans<< " strokes.";
    }
   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
