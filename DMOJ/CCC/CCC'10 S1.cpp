#include <bits/stdc++.h>
#include <string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n>0){
        string name;
        int r, s, d, total;
        pair<string,int> ans1 {name, 0}, ans2 {name, 0};

        for(int i = 0; i<n; i++){
            cin>>name>>r>>s>>d;
            total = (2*r)+(3*s)+d;

            if(total>ans1.second|| (total==ans1.second && name.compare(ans1.first)<0)){
                ans2.first = ans1.first;
                ans2.second = ans1.second;
                ans1.first = name;
                ans1.second = total;

            } else if (total>ans2.second || (total==ans2.second&&name.compare(ans2.first)<0)){
                ans2.first = name;
                ans2.second = total;
            }

        }

    if(n ==1){
        cout<<ans1.first<<endl;
    } else {
        cout<<ans1.first<<endl;
        cout<<ans2.first<<endl;
    }

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
