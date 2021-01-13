int id[20000];
int sz[20000];
//sets all ids to itself
void quickFindUF(int n){
    for(int i = 1; i <= n; i++){
        id[i] = i;
    } 
}
//find root of a value
int root (int i) {
    //while id does not equal itself, go up tree and find
    while(i!=id[i]){
        id[i] = id[id[i]];
        i = id[i];
    }
 return i;
    
}
//check if connected
bool connected(int p, int q){
    return root(p) == root(q);
}
//joins nodes p and q together
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
