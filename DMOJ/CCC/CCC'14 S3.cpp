#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        bool yes = false;
        int n;
        int h = 1;
        cin>>n;
        vector<int> top;
        stack<int> branch;
        for(int j = 0; j < n; j++){
            int a;
            cin>>a;
            top.push_back(a);
        }
            while(1){
            if(top.empty()&&branch.empty()){
                yes = true;
                break;
            }
            if(!top.empty()&&top.back()==h){
                top.pop_back();
                h++;
            } else if(!branch.empty()&&branch.top()==h){
                branch.pop();
                h++;
            } else if(!top.empty()&&top.back()!=h){
                branch.push(top.back());
                top.pop_back();

            } else if(top.empty()){
                break;
            }
        }
            

            
        if(yes==false){
            cout<<"N"<<endl;
        } else {
            cout<<"Y"<<endl;
        }
       
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
