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

bool findFactors(int n)
{
    vector<int> v;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != sqrt(n))
            {
                v.push_back(n / i);
            }
        }
    }
    if (v.size() > 501)
        return true;
    return false;
}

int main()
{
    blaze;
    ll i = 1, x = 0;
    while (true)
    {
        x += i;
        if (findFactors(x))
        {
            cout << x << endl;
            break;
        }
        i++;
    }
    return 0;
}