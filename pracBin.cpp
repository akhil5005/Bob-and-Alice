#include <bits/stdc++.h>
using namespace std;

int main() {
	
	    int n,x;
	    cin >> n >> x;
	    int sum2 = 0;
	    
	   
	        for(int i = n; i > 0; --i){
	            sum2 += pow(2,i);
                x--;
                if(x == 0) {
                    break;
                }
	        }

            

           int sum1 = sum2;

            for(int i = (n-x); i > 0; --i){
                sum1 -= pow(2,i);
            }
	    
	    
	        

            cout << (sum2 + sum1) << endl;

        



}
