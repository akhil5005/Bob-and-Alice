#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }

        sort(arr,arr+n);
        for(int i = 0; i < n; ++i){
            if((i+1)>= arr[i]){
                arr[i] = arr[i] + ((i+1) - arr[i]);
            }
            
        }

        int sum = 0;
        for(int i = 0; i < n; ++i){
            sum += arr[i];
        }

        int k = (n*(n+1))/2;

        if(sum == k){
            cout << "YES" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }


}
