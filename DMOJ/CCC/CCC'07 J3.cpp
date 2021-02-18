    #include <bits/stdc++.h>
    using namespace std;


    void solve(){
        unsigned int arr[10] = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};

        int n;
        cin>>n;
        for(int i = 0; i < n; i++){
            int s;
            cin>>s;
            arr[s-1] = 0; 
        }
        int of;
        cin>>of;
        int avg = 0;
        for(int i = 0; i < 10; i++){
            //cout<<arr[i]<<endl;
            avg+=arr[i];
        }
        avg = avg/(10-n);

        if(of > avg) cout<<"deal"<<"\n";
        else {
            cout<<"no deal"<<"\n";
        }


    }
    
    
    
    int main(){
        ios::sync_with_stdio(0);
        cout<<fixed<<setprecision(1);
        cin.tie(0);
        solve();
        return 0;
    }
