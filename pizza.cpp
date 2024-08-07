#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int y = INT_MAX;
        for(int i = 0; i <= 30; ++i){
           
            int k = pow(2,i) - x;
            if(k > 0){
                y = min(y,k);
            }
           

        }
        int m = x - y;
        cout << m << endl;
    }
}