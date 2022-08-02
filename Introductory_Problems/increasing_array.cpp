#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long int moves(vector<int> &arr){
    long long int ans = 0;
    for(int i = 1; i<arr.size(); i++){
        if(arr[i]<arr[i-1]){
            ans += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) cin >> arr[i];

    cout << moves(arr);
    return 0;
}