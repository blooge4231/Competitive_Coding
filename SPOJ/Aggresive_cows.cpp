    #include <bits/stdc++.h>
    using namespace std;

    
    
    void solve(){
        int t;
        cin>>t;
        for(int i = 0 ; i<t;i++){
            int n, c;
            cin>>n>>c;
            vector<int> stalls;
            for(int j = 0; j<n;j++){
                int a;
                cin>>a;
                stalls.push_back(a);   
            }
        sort(stalls.begin(),stalls.end());

        int low = 0, high = stalls[n-1], mid, ans=0;
        while(low<=high){
            mid = (low+high+1)/2;
            int prev = 0, count = 1;
            for(int k = 1; k<n && count<c;k++){
                if(stalls[k]-stalls[prev]>=mid){
                    count++;
                    prev = k;
                }
            }
            if(count>=c){
                ans = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        cout<<ans<<'\n';

        }    
    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
