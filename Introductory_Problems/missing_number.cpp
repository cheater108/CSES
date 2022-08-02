#include<iostream>
#include<vector>
using namespace std;

int missing_number(int n,vector<int> &arr) {
    int ans = 0;
    n++;
    for(int i = 1; i<n; i++) ans ^= i;
    for(int i : arr) ans ^= i;

    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n-1);
    n--;
    for(int i = 0; i<n; i++) cin >> arr[i];
    n++;
    cout << missing_number(n,arr);
    return 0;
}