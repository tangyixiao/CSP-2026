//x
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define u unsigned
signed main()
{
    ifstream cin("and.in");
    ofstream cout("and.out");
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int k = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (k < a[i])
            k = a[i];
    }
    cout << k;

    return 0;
}