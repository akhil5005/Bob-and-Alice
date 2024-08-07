#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int k = 0;
        if(x < y){
        for(int i = 0; i < 2; ++i){
            x = x + 1;
            if(x == y){
                k = 1;
                break;
            } 
        }
       }
       else if(x > y){
        for(int i = 0; i < 1; ++i){
            y = y + 1;
            if(x == y){
                k = 1;
                break;
            }
        }
       }
       else{
        k = 1;
       }

       if(k == 1) {
        cout << "yes" << endl;
       }
       else{
        cout << "No" << endl;
       }
    }

}
