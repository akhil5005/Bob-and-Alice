#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    string s;
	    cin >> s;

        int x,y;
        

        int ct = 0;

        for(int i =1; i < n; ++i){
            if(s[i] != s[i-1]){
                ct++;
            }
        }
        int t= ct+1;

        if(s[0] != s[n-1]){
            x = t/2;
            y = t/2;
        }
        if(s[0] == s[n-1]){
            
        if(s[0] == '1'){
            x = (t+1)/2;
            y = t-x;
            }

            if(s[0] == '0'){
            y = (t+1)/2;
            x = t-y;
            }
        }

        

        if(x == y){
            cout << '1' << endl;
        }
        else if(n ==1 && s[0] == '0'){
            cout << '1' << endl;
        }
        else if(x < y){
            cout << '2' << endl;
        }
        else{
            cout << '0' << endl;
        }

        
	    
        }
	}


