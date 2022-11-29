#include <bits/stdc++.h>
#define int long long
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n; vector<int> a;
void input(){
    FastIO;
    freopen("fibo.inp","r",stdin);
    freopen("fibo.out","w",stdout);
    cin >> n; a.resize(n+1);
}
int fibo(int n){
    return ((n==1 || n==2) ? 1 : ((a[n]==0) ? a[n]=fibo(n-1),a[n]+fibo(n-2) : a[n]+fibo(n-2)));
}
int32_t main(){
    input();
    cout << fibo(n);
}
