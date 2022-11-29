#include <bits/stdc++.h>
#define FastIO ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;
int n;
string a, b;
void input(){
    FastIO;
    freopen("FIBONACCI.INP", "r", stdin);
    freopen("FIBONACCI.OUT", "w", stdout);
    cin >> n;
}
string bignum_add(string a, string b){
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;
    int cr = 0, t; 
    string ans="";
    for(int i = a.size()-1; i >= 0; i--){
        t = a[i] - '0' + b[i] - '0' + cr;
        cr = t / 10;
        t %= 10;
        ans = (char)(t + '0') + ans;
    }
    return ((cr == 1) ? '1' + ans : ans);
}
void sol(){
    a = "1", b = "1";
    for(int i = 3; i <= n; i++){
        string c = bignum_add(a,b);
        swap(a,b); swap(b,c);
    }
    cout << b;
}
int32_t main(){
    input();
    sol();
}
