#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Event
{
    bool is_r;
    ll start;
    char c;
};
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin >> n;
    ll len = 0;
    vector<pair<ll, char>> ar;
    ar.reserve(n + 2);
    ar.resize(n);
    string s;
    for (auto &i : ar)
    {
        cin >> i.first >> s;
        i.second = s[0];
        len += i.first;
    }
    vector<Event> eve;
    eve.reserve(2 * n + 1);
    ll ci = 0;
    for (auto &&i : ar)
    {
        // cout << "a=" << i.first << " c=" << i.second << "\n";
        eve.emplace_back(Event{false, ci + 1, i.second});
        ci += i.first;
        eve.emplace_back(Event{true, len - ci + 1, i.second});
    }

    sort(eve.begin(), eve.end(), [](const Event &a, const Event &b)
         { return a.start < b.start; });
    ll mid = (ci + 1) / 2;

    ll dif = 0, last = 1;
    char cc = '\0', cr = '\0';
    for (auto &&e : eve)
    {
        if (e.start > mid)
            break;
        // cout << "e: is_r=" << e.is_r << " start=" << e.start << " c=" << e.c << " state: last=" << last << " cc=" << cc << " cr=" << cr << endl;
        if (cc != cr)
        {
            int d = e.start - last;
            // cout << "^updated: +" << d << "\n";
            dif += d;
        }

        last = e.start;
        if (e.is_r)
            cr = e.c;
        else
            cc = e.c;
    }
    if (cc != cr)
        dif += mid - last + 1;
    cout << dif;
    return 0;
}
//