#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
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

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main(){
    long long a;
    long long b;

    cin >> a >> b;

    cout << lcm(a,b);

    return 0;
}