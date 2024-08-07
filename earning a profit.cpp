///www.codechef.com/problems/ICL1905?tab=statement*/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a;
        cin >> n >> a;
        vector<int> diff(n+1);
        vector<int> fuel(n+1);
        vector<int> pf(n+1);
        for(int i = 1; i <=n; ++i){
            cin >> diff[i];
            cin >> fuel[i];
        }

        for(int i = 1; i <= n; ++i){
            pf[i] = pf[i-1] + fuel[i];
        }

        int R = n;
        int L = 1;

        int M = max(diff[L],diff[R]);
        int m = min(diff[L],diff[R]);

        int profit = a*(R-L+1) -(pf[R] - pf[L-1]) - ((M-m)*(M-m));

        cout << profit << endl;

    }
}