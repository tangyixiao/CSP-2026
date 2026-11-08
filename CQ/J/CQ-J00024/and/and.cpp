#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    vector<ll> ns;
    vector<bool> visiabale;
    ll n, m;
    cin >> n >> m;
    ll a;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        ns.push_back(a);
        visiabale.push_back(true);
    }
    sort(ns.begin(), ns.end());
    reverse(ns.begin(), ns.end());
    ll maxnumb = *ns.begin();
    for (ll i = 0; i < m; i++)
    {
        ll maxpoll;
        ll tmax = maxpoll;
        ll tmp = 0;
        while (!visiabale[tmp])
            tmp++;
        tmax = maxnumb & ns[tmp];
        maxpoll = tmp;
        for (ll j = 0; j < n; j++)
        {
            if (!visiabale[j])
                continue;
            else
            {
                if (maxnumb & ns[j] > tmax)
                {
                    tmax = maxnumb & ns[j];
                    maxpoll = j;
                }
            }
        }
        ns[maxpoll] = false;
        maxnumb = tmax;
    }
    cout << maxnumb;
    return 0;
}