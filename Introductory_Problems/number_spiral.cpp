#include<iostream>
#include<vector>
#include<algorithm>
#define ll unsigned long long int 
using namespace std;

ll power(int n){
    ll ans = n;
    return ans*ans;
}

ll val(int r, int c){
    ll row_val = r;
    ll col_val = c;
    if(row_val%2==0){
        row_val = power(r);                   // basic idea is to calulate row's first ans coloumns's first val
    }                                           
    else{
        row_val = power(r-1)+1;               // if row is multiple of 2 then row^2 , else (row-1)^2 +1
    }
    if(col_val%2==1){                         // here also if coloumn is odd then coloumn^2 , else (col-1)^2 +1
        col_val = power(c);
    }
    else{
        col_val = power(c-1)+1;
    }

    if(r<c){
        if(c%2==1){                     
            return col_val-(r-1);             // once first val are known use relation(i.e whether to + or - by seeing sample matrix) to cal x,y val
        }
        else{
            return col_val+(r-1);
        }
    }
    else{
        if(r%2==0){
            return row_val-(c-1);
        }
        else{
            return row_val+(c-1);
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int row , coloumn;
        cin >> row >> coloumn;

        cout << val(row,coloumn) << "\n";
    }

    return 0;
}