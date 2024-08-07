#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;

	string s;
	cin >> s;

	string t;
	cin >> t;

	int hsh1[2];
	int hsh2[2];

	for(int i = 0; i < n; ++i){
		hsh1[s[i] - '0']++;
	}

	for(int i = 0; i < n; ++i){
		hsh2[t[i] - '0']++;
	}
		int count = 0;
	if(hsh1[0] == hsh2[0] && hsh1[1] == hsh2[1]){
		for(int i = 0; i < n; ++i){
			if(s[i] != t[i]){
				count ++;
			}

			int min = count/2;

			if(k < min){
				cout << "No" << endl;
			}
			else if(min <= k){
				cout << "Yes" << endl;
			}
		}

		
		
}
	else{
		cout << "No" << endl;
	}

	


}
