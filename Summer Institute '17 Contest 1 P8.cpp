#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> vals;
int tally = 0;
int target = 0;
void count(int sum, int at){
    if(at==vals.size()){
        if(sum==target)tally++;
        return;
    }
    count(sum+vals[at], at+1);
    count(sum, at+1);
}

int main(){
    int a;
    cin>>a>>target;
    for(int i=0;i<a;i++){
        int next;
        cin>>next;
        vals.push_back(next);
    }
    count(0,0);
    cout<<tally<<endl;
}
