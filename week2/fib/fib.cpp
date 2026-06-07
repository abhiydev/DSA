#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int current = 1;
    int previous = 1;
    int beforePrevious = 0;

    for(int i = 0; i < n; i++){
        current = previous + beforePrevious;
        beforePrevious = previous;
        previous = current;
    }

    return current;
}

int main(void){
    int n;
    cin >> n;
    
    cout << fib(n);

    return 0;
}