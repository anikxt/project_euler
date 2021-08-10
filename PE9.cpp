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

// Special Pythagorean triplet

int main()
{
    blaze;
    int flag = 0;
    for (int i = 1000; i >= 1; i--)
    {
        int start = 1, end = i - 1;
        if (start == end)
        {
            cout << start << " " << end << " " << i << endl;
            break;
        }
        while (start < end)
        {
            int x = pow(start, 2) + pow(end, 2);
            if (x == pow(i, 2))
            {
                if (start + end + i == 1000)
                {
                    cout << start << " " << end << " " << i << endl;
                    deb(start * end * i);
                    flag = 1;
                    break;
                }
                start++;
                end--;
            }
            else if (x < pow(i, 2))
            {
                start++;
            }
            else if (x > pow(i, 2))
            {
                end--;
            }
        }
        if (flag)
            break;
    }
    return 0;
}