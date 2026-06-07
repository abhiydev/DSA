#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int d = 1;
    int gcd = 1;

    for(int i = 0; i <= a && i <= b; i++){
        if(a % d == 0 && b % d == 0){
            gcd = d;
        }
        d++;
    }

    return gcd;
}

int main(){

    int a;
    int b;
    cin >> a;
    cin >> b;

    cout << gcd(a,b);


    return 0;
}