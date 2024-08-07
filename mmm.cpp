#include <bits/stdc++.h>
using namespace std;

int main() {
	// int t;
	// cin >> t;
	// while(t--){
	    int n,m;
	    cin >> n >> m;
	    string a;
	    string b;
	    cin >> a >> b;
	    int x = 0;
	    int f = INT_MAX;
	    int k = 0;
	    
	    for(int i = 0; i <(n-m+1); ++i){
	        for(int j = 0; j < m; ++j){
	            if(a[j + k] != b[j]){
	                x = x+1;
	            }
	            
	        }
	        f = min(f,x);
	        k = k + 1;
            x = 0;
	    }
	    
	    cout << f << endl;
	}

// }