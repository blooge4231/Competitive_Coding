    #include <bits/stdc++.h>
    using namespace std;


    void solve(){
        vector<char> arr = {'A', 'B', 'C', 'D', 'E'};
        while(1){
            int b, n;
            cin>>b>>n;

            if(b == 4 && n == 1){
                for(int i = 0; i < 5; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
                break;
            }

            if(b == 1){
                for(int i = 0; i < n; i++){
                    char temp = arr[0];
                    arr.erase(arr.begin());
                    arr.push_back(temp);
                }
            } else if (b == 2) {
                for(int i = 0; i < n; i++){
                    char temp = arr.back();
                    arr.pop_back();
                    arr.emplace(arr.begin(), temp);
                }
            } else if (b == 3) {
                for(int i = 0; i < n; i++){
                    char temp = arr[1];
                    arr[1] = arr[0];
                    arr[0] = temp;
                }
            }
        }



    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cout<<fixed<<setprecision(1);
        cin.tie(0);
        solve();
        return 0;
    }
