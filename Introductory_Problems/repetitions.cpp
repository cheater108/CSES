#include<iostream>
using namespace std;

int repete(string &x){
    int i = 0; 
    int j = 1;
    int ans = 0;
    while(j<x.length()){
        while(x[j]==x[i]){
            j++;
        }
        int curr = j-i;
        if(curr>ans) ans = curr;
        i=j;
        j++;
    }
    return ans;
}

int main()
{
    string x;
    cin >> x;
    if (x.length()==1) cout << 1;
    else cout << repete(x);
    return 0;
}