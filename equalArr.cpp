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
	    
	    int max = *max_element(arr,arr+n);
        
        int N = 2e5 + 10;
        int hsh[N] = {0};

        for(int i = 0; i < n; ++i){
            hsh[arr[i]]++;
        }
        int k = hsh[0];
        int m = 1;

        for(int i = 1; i < N; ++i){
            if(hsh[i] == (n - k)){
                m = 0;
                break;
            }
        }

        if(m == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

	}
}
