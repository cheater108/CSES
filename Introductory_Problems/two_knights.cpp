#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = unsigned long long int ;

ll power(int n){
    ll ans = n;
    return ans*ans;
}

ll knights(int x){
    if(x==2) return 6;
    ll total_ways = 0;
    total_ways = (power(x)*(power(x)-1))/2;         //total ways to put two piece = (n^2 * (n^2 - 1)) / 2

    ll cannot_place = 0;
    cannot_place = 4*(x-2)*(x-1);                   //cannot place = total 3 X 2 rectangles that can be made in n X n 
                                                    // i.e 2 * (n-2) * (n-1) also two ways to place 2 knights therefore 2 * cannot place
    return total_ways - cannot_place;
}

int main()
{
    int n; cin >> n;
    int x = 1;
    while(x<=n){
        cout << knights(x) << "\n";
        x++;
    }
    return 0;
}