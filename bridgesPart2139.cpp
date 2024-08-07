#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> cost;
    ll root;
    ll root_sum = 0;
    ll tot_rem_sm = 0;

    for(ll i = 0; i < n; ++i){
        if(i = 0){
            cin >> root;
        }
        else{
            ll x;
            cin >> x;
            cost.push_back(x);
            root_sum += (root * x);
            tot_rem_sm += x;
        }
    }


    sort(cost.begin(),cost.end());


    if(root_sum <= k){
        cout << 1 << endl;
        return;
    }

    ll cur_sum = 0;
    ll ans = n;
    for(ll i = 0; i < cost.size(); ++i){
        cur_sum += cost[i];
        ll rem_sum = (tot_rem_sm - cur_sum);
        if(cur_sum  * (rem_sum+root) <= k){
            ans = min(ans,n - (i+1));
        }
    }

    cout << ans << endl;

}

int main(){
    
}