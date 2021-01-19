#include <bits/stdc++.h>
using namespace std;
void solve(){
    double a, b;
    cin>>a>>b;
    double bmi = (a)/(b*b); 
    if(bmi<18.5){
        cout<<"Underweight";
    } else if (bmi>=18.5&&bmi<=25){
        cout<<"Normal weight";
    } else if (bmi>25) {
        cout<<"Overweight";
    }
   
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
