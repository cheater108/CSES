#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void beautiful_permutation(int n){
    if (n==1) {
        cout << "1";
        return;
    }
    if(n<=3){
        cout << "NO SOLUTION" ;
        return ;
    }
    if (n==4){
        cout << "3 1 4 2";
        return;
    }
    if (n==5){
        cout << "4 2 5 1 3";
        return;
    }
    int x = n;
    if(x%2==0){
        while(x!=0){
            cout << x << " ";
            x -= 2;
        }
        cout << "5 1 3 ";
        x = 7;
        while(x<n){
            cout << x << " ";
            x += 2;
        }
    }
    else{
        x--;
        while(x!=0){
            cout << x << " ";
            x -= 2;
        }
        cout << "5 1 3 ";
        x = 7;
        while(x<=n){
            cout << x << " ";
            x += 2;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    beautiful_permutation(n);
    return 0;
}