    #include <bits/stdc++.h>
    #include <algorithm>
    using namespace std;
    
    float heron(float x1, float y1, float x2, float y2){
        return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    }
    float csTriangleDiam(float semi, float a, float b, float c){
        return 2*(a*b*c)/(4*sqrt(semi*(semi-a)*(semi-b)*(semi-c)));
    }

    void solve(){
        int n;
        cin>>n;
        int co [n][2];
        for(int i = 0 ; i<n;i++){
            for(int j = 0 ; j<2;j++){
                cin>>co[i][j];
            }
        }

        float ans = 0;
        for(int i = 0; i<n;i++){
            for(int j = i+1; j<n;j++){
                for(int k = j+1; k<n;k++){
                    int x1, y1, x2, y2, x3, y3;
                    x1 = co[i][0];
                    x2 = co[j][0];
                    x3 = co[k][0];
                    y1 = co[i][1];
                    y2 = co[j][1];
                    y3 = co[k][1];
                    
                    float a, b, c;
                    a = heron(x1,y1,x2,y2);
                    b = heron(x2,y2,x3,y3);
                    c = heron(x1,y1,x3,y3);
                    
                    float semi = (a+b+c)/2;
                    float diam = 0;

                    if(semi == 0|| a*a+b*b-c*c < 0||a*a+c*c-b*b<0||b*b+c*c-a*a<0){
                        ans = max(ans,max(a,max(b,max(c,diam))));
                    } else {
                        diam = csTriangleDiam(semi, a, b, c);
                        ans = max(ans,diam);
                    }       

                }
            }
        }
        cout<<ans;
        
    
        


    }
    
    
    
    int main(){
        cout << setprecision(2) << fixed;
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
