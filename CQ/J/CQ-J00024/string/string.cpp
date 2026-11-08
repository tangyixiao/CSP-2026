#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    vector<ll> l;
    vector<char> c;
    ll as = 0;
    ll n;
    ll el = 0, del;
    ll os = 0;
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int le;
        char ch;
        cin >> le >> ch;
        c.push_back(ch);
        as += le;
        l.push_back(as);
    }
    del = n - 1;
    for (ll point = 0, dpoint = as - 1; dpoint >= point; point++, dpoint--)
    {
        if (point >= l[el])
        {
            el++;
        }
        if (dpoint < l[del - 1])
        {
            del--;
        }
        if (c[el] != c[del])
            os++;
    }
    cout << os;
    return 0;
}