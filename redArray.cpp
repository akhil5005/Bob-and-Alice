#include <bits/stdc++.h>
using namespace std;

int main() {
	// int t;
	// cin >> t;
	// while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; ++i){
	        cin >> arr[i];
	    }

       // sort(arr,arr+n);

        int m = (2*1e5) + 10;
        int hsh[m] = {0};

        for(int i = 1; i <= n; ++i){
            hsh[arr[i]]++;
        }

        int k = INT_MAX;
        int x = 0;

        for(int i = 1; i <= m; ++i){
            if(hsh[i] != 0){
                x = x + i*(n-hsh[i]);
                k = min(x,k);
            }
        }

        cout << k << endl;
	    
	    
	}

// }
