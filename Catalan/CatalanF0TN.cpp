#include <bits/stdc++.h>
#define int long long
using namespace std;
int catalan(int n)
{
    int a = 1, b = 1;
    for(int i=1; i <= n; i++)
        a *= i;
    a *= a;
    for(int i = 1; i <= 2 * n; i++)
        b *= i;
    int re = b / a;
    re /= n + 1;
    return re;
}
int32_t main()
{
    int n;
    cin >> n; cout << "0 ";
    for (int i = 0; i <= n; i++)
        cout<<catalan(i)<<" ";
    return 0;
}