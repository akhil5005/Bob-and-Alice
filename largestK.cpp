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

        int N = 2e5+10;
	    
        int hsh[N] = {0};

        for(int i = 0; i < n; ++i){
            hsh[arr[i]]++;
        }

        int count = 0;

        for(int i = 0; i < N; ++i){
            if(hsh[i] != 0){
                count++;
            }
        }

        cout << count << endl;
	    
	}

}
