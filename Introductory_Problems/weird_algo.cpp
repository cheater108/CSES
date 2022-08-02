#include<iostream>
using namespace std;

void weird_algo(unsigned long long int n){
    while(n!=1){
        cout << n << " ";
        if (n%2==0) n/=2;
        else n = 3*n +1;
    }
    cout << n ;
}

int main(){
    int n;
    cin >> n;
    weird_algo(n);
    return 0;
}
