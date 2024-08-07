#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh[N];

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        hsh[arr[i]]++;
    }

   
    int k;
    for(int j =0; j < N; ++j){
        if(hsh[j] == 1){
            k = j;
            break;
        }
    }

    cout << k << endl;

    



}