#include<bits/stdc++.h>
using namespace std;

const long long int N = 1e7 + 10;
int hsh[N];

bool ans(int arr[],int n){
    
        for(int i = 0; i < n; ++i){
            hsh[arr[i]]++;
        }

        int flag = 1;
        for(long long int i = 0; i < N; ++i){
            if(hsh[i] > 1){
                flag = 0;
                break;
            }
            else{
                flag = 1;
            }
        }

        if(flag == 0){
            return true;
        }
        else{
            return false;;
        }
    }


int main(){
    
    int n;
    cin >> n;
    int nums[n];

    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    bool x = ans(nums,n);

    cout << x << endl;

}