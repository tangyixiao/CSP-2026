#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll find(vector<ll> tmp, ll target)
{
    if(tmp.empty()) return 0;
    for(int i = 1; i <= tmp.size(); i++)
    {
        if(tmp[i - 1] == target)
        {
            return i;
        }
    }
    return 0;
}

vector<ll> agame(vector<ll> arr, ll pos)
{
    vector<ll> tmp;
    for(int i = pos; i < arr.size(); i++)
    {
        ll ret = find(tmp, arr[i]);
        if(ret != 0)
        {
            tmp.erase(tmp.begin() + (ret - 1), tmp.end());
            tmp.push_back(arr[i]);
        }
        else tmp.push_back(arr[i]);
    }

    return tmp;
}

int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n + 1);
    for(ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> res(m + 1, 0);

    for(ll i = 1; i <= n; i++)
    {
        vector<ll> ans = agame(arr, i);
        for(ll j = 0; j < ans.size(); j++)
        {
            res[ans[j]]++;
        }
    }

    for(ll i = 1; i <= m; i++)
    {
        cout << res[i] << ' ';
    }
    cout << endl;
    return 0;
}
