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

unordered_map<string, int> mapper;

int numLenCount(int n)
{
    mapper["1"] = 3;
    mapper["2"] = 3;
    mapper["3"] = 5;
    mapper["4"] = 4;
    mapper["5"] = 4;
    mapper["6"] = 3;
    mapper["7"] = 5;
    mapper["8"] = 5;
    mapper["9"] = 4;
    mapper["10"] = 3;
    mapper["11"] = 6;
    mapper["12"] = 6;
    mapper["13"] = 8;
    mapper["14"] = 8;
    mapper["15"] = 7;
    mapper["16"] = 7;
    mapper["17"] = 9;
    mapper["18"] = 8;
    mapper["19"] = 8;
    mapper["20"] = 6;
    mapper["30"] = 6;
    mapper["40"] = 5;
    mapper["50"] = 5;
    mapper["60"] = 5;
    mapper["70"] = 7;
    mapper["80"] = 6;
    mapper["90"] = 6;
    mapper["00"] = 7;
    mapper["000"] = 11;
    mapper["and"] = 3;
    string s, f;
    int x = 0, r = 0, t = 0;
    for (int i = 1; i <= 9; ++i)
    {
        if (i > n)
            return r;
        s = to_string(i);
        r += mapper[s];
        x += mapper[s];
    }
    for (int i = 10; i <= 19; ++i)
    {
        if (i > n)
            return r;
        s = to_string(i);
        x += mapper[s];
    }
    for (int i = 20; i <= 99; i += 10)
    {
        s = to_string(i);
        s.insert(1, 1, '0');
        x += (mapper[s.substr(0, 2)] * 10 + r);
    }
    int k = x;
    x += (r * 100 + mapper["00"] * 900 + (mapper["and"] * 99 * 9) + (k * 9) + mapper["000"]);
    deb(x);
}

int main()
{
    blaze;
#ifndef ONLINE_JUDGE
    freopen("/media/blaze/Data/Ember/input.txt", "r", stdin);
    freopen("/media/blaze/Data/Ember/output.txt", "w", stdout);
#endif
    return 0;
}
