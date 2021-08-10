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

// Largest palindrome product

bool palCheck(int n)
{
    string s = to_string(n);
    reverse(all(s));
    int x = stoi(s);
    return n == x ? true : false;
}

int main()
{
    blaze;
    int largest = 999, smallest = 100;
    int num = 0;
    for (int i = largest; i >= smallest; i--)
    {
        for (int j = i; j >= smallest; j--)
        {
            if (palCheck(i * j) and i * j > num)
            {
                num = i * j; //
                if (j > smallest)
                {
                    smallest = j;
                    break;
                }
            }
        }
    }
    deb(num);
    return 0;
}