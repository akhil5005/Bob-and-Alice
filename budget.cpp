#include <bits/stdc++.h>
using namespace std;



int main() {
	// int t;
	// cin >> t;
	// while(t--){
	    int n,x;
	    cin >> n >> x;

        int m = 1e5 + 10;
        int hsh[m] = {0};
	    
	   int a[n+1];
	    
	    for(int i = 1; i <= n; ++i){
	        cin >> a[i];
	    }

        sort(a+1,a+(n+1),greater<int>());

        for(int i = 1; i <= n; ++i){
            hsh[i] = hsh[i-1] + a[i];
        }

        // for(int i = 1; i <= n; ++i){
        //     cout << a[i] << " ";
        // }

        // for(int i = 1; i <= n; ++i){
        //     cout << hsh[i] << endl;
        // }

        for(int i = n; i >= 0; --i){
            if((i*x) == hsh[i]){
                cout << i << endl;
                break;
            }
        }
	}

// }
