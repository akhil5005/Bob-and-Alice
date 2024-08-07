#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
        int N = 26;
        int hsh[N] = {0};

        int count = s.size();
        if(count%2 == 0){
            for(int i=0; i < s.size(); ++i){
                hsh[s[i]-'a']++;
            }
        }
        else{
            cout << 0 << endl;
        }
	}
	

}
