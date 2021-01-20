#include <bits/stdc++.h>
using namespace std;
int id[20000];
int sz[20000];

void quickFindUF(int n){
    for(int i = 1; i <= n; i++){
        id[i] = i;
    } 
}

int root (int i) {
    while(i!=id[i]){
        id[i] = id[id[i]];
        i = id[i];
    }
 return i;
    
}

bool connected(int p, int q){
    return root(p) == root(q);
}

void join(int p, int q){
    int i = root(p);
    int j = root(q);
    if(i==j) return;
    
    if(sz[i]<sz[j]){
        id[i] = j;
        sz[j]+=sz[i];
    } else {
        id[j] = i;
        sz[i]+=sz[j];
    }
}

void solve(){
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    quickFindUF(n);
    for(int i = 1; i<=m; i++){
        int x, y;
        cin>>x>>y;
        join(x,y);
    }
    if(connected(a,b)==true){
        cout<<"GO SHAHIR!"<<endl;
    } else {
        cout<<"NO SHAHIR!"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
