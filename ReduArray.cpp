#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n+1];

        for(int i =1; i <= n; ++i){
            cin >> arr[i];
        }

        int N = 2*1e5+10;
        int hsh[N] = {0};

        for(int i = 1; i <= n; ++i){
            hsh[arr[i]]++;
        }

        //cout << hsh[1] << endl;
        
        int k = n;
        // cout << k << endl;
        for(int i = 1; i <= N; ++i){
            int cost = 0;
            cout << cost << endl;
            
            cost += i*(n - hsh[i]);
            cout << cost << endl;
            k = min(k,cost);
        }

         //cout << k << endl;
        
    }
}