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

unordered_map<ll, ll> mapper;
ll z = 0, maxi = 0;

void collatzSequence(ll number)
{
    ll r = number, x = 1;
    while (number != 1)
    {
        if (number % 2)
        {
            number = 3 * number + 1;
            x++;
        }
        if (!(number % 2))
        {
            number /= 2;
            x++;
        }
    }
    if (x > maxi)
    {
        maxi = x;
        z = r;
    }
}

ll optimizedCollatzSequence(ll number)
{
    ll z;
    if (mapper.find(number) != mapper.end())
        return mapper[number];
    if (number % 2 == 0)
        mapper[number] = 1 + optimizedCollatzSequence(number / 2);
    else
        mapper[number] = 2 + optimizedCollatzSequence((3 * number + 1) / 2);
    return mapper[number];
}

int main()
{
    blaze;
#ifndef ONLINE_JUDGE
    freopen("/media/blaze/Data/Ember/input.txt", "r", stdin);
    freopen("/media/blaze/Data/Ember/output.txt", "w", stdout);
#endif
    mapper[1] = 1;
    for (ll i = 500000; i < 1000000; ++i)
    {
        ll x = optimizedCollatzSequence(i);
        if (x > maxi)
        {
            maxi = x;
            z = i;
        }
    }
    deb(maxi);
    deb(z);
    return 0;
}
