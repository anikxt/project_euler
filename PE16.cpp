#pragma GCC optimize "trapv"
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fab(a, b, i) for (int i = a; i < b; ++i)
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define f first
#define se second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define endl '\n'
#define blaze ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
typedef long long int ll;
//=======================
const int N = 2e6 + 13, M = N;
//=======================
int a[N];
int c, k, m, n, t, x, y;
//=======================

int main()
{
    blaze;
#ifndef ONLINE_JUDGE
    freopen("/media/blaze/Data/Ember/input.txt", "r", stdin);
    freopen("/media/blaze/Data/Ember/output.txt", "w", stdout);
#endif
    int a[500];
    a[0] = 2;
    int len = 1;
    for (int i = 1; i < 1000; ++i)
    {
        int j = 0, carry = 0;
        while (j < len)
        {
            int res = 2 * a[j] + carry;
            carry = res / 10;
            a[j++] = res % 10;
        }
        while (carry)
        {
            a[len++] = carry % 10;
            carry /= 10;
        }
    }
    ll x = 0;
    for (int i = 0; i < len; ++i)
    {
        x += a[i];
    }
    cout << "x = " << x << endl;
    return 0;
}