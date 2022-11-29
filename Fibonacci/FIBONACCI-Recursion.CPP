#include <bits/stdc++.h>
using namespace std;
int n;
int sol(int n){
    if(n == 1 || n == 2) return 1;
    return sol(n - 1) + sol(n - 2);
}
int32_t main(){
    cin >> n;
    cout << sol(n);
}