#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
    cin >> t;
    while(t--){
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

        int sum[N] = {0};

        // for(int i = 0; i < N; ++i){
        //    sum[i] = hsh1[i] + hsh2[i];
        // }
        int k = 0;

        for(int i = 0; i < N; ++i){
            k = k + (max(hsh1[i],hsh2[i]) - min(hsh1[i],hsh2[i]));
        }
        cout << k << endl;
        
    }
}
   

    
