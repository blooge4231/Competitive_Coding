#include <bits/stdc++.h>
using namespace std;
void solve(){
    int k;
    cin>>k;
    vector<int> nums;
    for(int i = 0; i<k; i++){
        int n;
        cin>>n;
        if(n!=0){
            nums.push_back(n);
        } else if (n==0){
            if(i!=0){
                nums.pop_back();
            }
        }
    }

    int sum = 0;
    for(int a : nums){
        sum+=a;
    }
    cout<<sum;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
