#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int max = INT16_MAX;
    vector<int> nums, sorted;
    for(int i = 0; i < n*n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
        sorted.push_back(a);
    }
    sort(sorted.begin(),sorted.end());
    int poss = 0;
    bool track = false;
    for(int i = 0; i < n*n; i++){
        if(nums[i]!=sorted[i]){
            poss++;
            track = true;
        }
        if(track == true&&nums[i]==sorted[i]||track==true&&(i+1)% n == 0){
            break;
        }
    }
    cout<<poss<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
