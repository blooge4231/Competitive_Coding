    #include <bits/stdc++.h>
    using namespace std;

    void solve(){
        long long n, q;
        cin>>n>>q;
        map<long long, long long> freq;
        for(long long i = 0; i < n; i++){
            long long a;
            cin>>a;
            freq[a]++;
        }

        for(long long i = 0; i < q; i++){
            int o;
            long long num;
            cin>>o>>num;
            if(o == 1){
                if(num%2 == 0){
                    freq[num/2] += (2*freq[num]);
                } else {
                    freq[num/2] += freq[num];
                    freq[(num/2) + 1] += freq[num];
                }
                freq[num] = 0;
            } else if(o == 2){
                cout<<freq[num]<<"\n";
            }
        }

    }

    int main(){
        cin.sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
