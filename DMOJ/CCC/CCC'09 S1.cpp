#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    int nums = 0;
    cin>>n1>>n2;
    int cubr = pow(n1,(1/3));
    int cube = cubr*cubr*cubr;
    while(cube<=n2){

        if(cube>=n1){
            int sqr = sqrt(cube);
            int sq = sqr*sqr;
            if(sq==cube){
                nums++;
            }
               
        }
            cubr++;
            cube = cubr*cubr*cubr;
        }
    
    cout << nums << "\n";
  
}
