#include<bits/stdc++.h>
using namespace std;

int main(){
   string s,t;
        cin >> s >> t;

        int N = 26;
        int hsh1[N] = {0};
        int hsh2[N] = {0};

        for(int i = 0; i < s.size(); ++i){
            hsh1[s[i]-'a']++;
        }

        for(int i = 0; i < t.size(); ++i){
            hsh2[t[i]- 'a']++;
        }

    int m = 1;

    for(int i = 0; i < N; ++i){
        if(hsh1[i] != hsh2[i]){
           m = 0;
           break;
            
        }
    }

    if(m == 0){
        cout << "false" << endl;
    }
    else{
        cout << "true" << endl;
    }


}