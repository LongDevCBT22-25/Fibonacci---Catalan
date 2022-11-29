#include <bits/stdc++.h>
using namespace std;
int n;
void sol(int n){
    int fn, fn1 = 1, fn2 = 1;
    cout << fn1 << ' ' << fn2 << ' ';
    for (int i = 3; i <= n; i++) {
        fn = fn1 + fn2;
        cout << fn << ' ';
        swap(fn, fn1);
        swap(fn1, fn2);
    }
}
int32_t main(){
    cin >> n;
    sol(n);
}