#include <bits/stdc++.h>
using namespace std;

// long long smaller(long long a,long long b){
//     if(a < b) return a;
//     else return b;
// }

// long long gcd(long long a,long long b){
//     long long d = 1;
//     long long gcd = 1;
//     long long n = smaller(a,b);
//     while( d <= n){
//         if(a % d == 0 && b % d == 0){
//             gcd = d;
//         }
//             d++;
//     }
//     return gcd;
// }

long long gcd(long long a,long long b){
    long long min = 0;
    long long max = 0;
    long long r = 0;
    if ( a < b) {
        min = a;
        max = b;
    }
    else {
        min = b;
        max = a;
    }

    while ( min != 0){
        r = max % min;
        max = min;
        min = r;
    }
    return max;
}

int main(){

    long long a;
    long long b;
    cin >> a;
    cin >> b;

    cout << gcd(a,b);


    return 0;
}