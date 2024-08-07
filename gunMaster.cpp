#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	    int n,d;
	    cin >> n >> d;
	    
	    int arr[n];
	    for(int i = 0; i < n; ++i){
	        cin >> arr[i];
	    }
	    
	    int count = 0;
	    for(int i = 0; i < n; ++i){
	        if(i == 0){
	             (arr[i] > d? count++ : count == 0);

                 
	    }
        else if(i > 0 && i < (n-1)){
            if(arr[i] > d){
                if(arr[i-1] <= d){
                    count++;
                }
            }
            else{
                if(arr[i-1] > d){
                    count++;
                }
            }
        }
	    else if(i == (n-1)){
            if(arr[i] > d){
                if(arr[i-1] <= d){
                    count ++;
                }
            }
            else{
                if(arr[i-1] > d){
                    count ++;
                }
            }
        }
        
	}

     cout << count << endl;

}
}
