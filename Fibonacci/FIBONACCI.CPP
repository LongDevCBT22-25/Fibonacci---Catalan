#include <bits/stdc++.h>
using namespace std;
int n;
int sol(int n){
    int fn, fn1 = 1, fn2 = 1;
    for (int i = 3; i <= n; i++) {
        fn = fn1 + fn2;
        fn1 = fn;
        swap(fn1, fn2);
    }
    return fn2;
}
int32_t main(){
    cin >> n;
    cout << sol(n);
}