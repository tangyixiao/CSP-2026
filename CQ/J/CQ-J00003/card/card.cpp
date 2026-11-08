#include <bits/stdc++.h>
using namespace std;
int cpos[300005];
int res[300005];
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin.tie(nullptr);
    cin.sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> table;
    table.reserve(n + 1);
    for (int i = 0; i < n; i++)
    {
        fill_n(cpos + 1, m, 0x3f3f3f3f);
        table.clear();
        for (int j = i; j < n; j++)
        {
            int c = a[j];
            if (cpos[c] < table.size())
                table.resize(cpos[c]);
            cpos[c] = table.size();
            table.push_back(c);
        }
        for (auto j : table)
            res[j]++;
    }
    for (int i = 1; i <= m; i++)
        cout << res[i] << ' ';
    return 0;
}
