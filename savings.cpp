#include <bits/stdc++.h>
using namespace std;

int main(){
	 int t;
	cin >> t;
	 while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;

        int ct = 0;
	    
        for(int i = x; i > 0; i--){
            if((i*y) > z){
                ct++;
               
            }
            else{
                break;
            }
        }

         cout << ct << endl;
	    
	}

 }
