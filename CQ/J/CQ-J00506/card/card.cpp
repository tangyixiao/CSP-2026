// T4
#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a;
vector<int> ans;
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    a.assign(n + 5, 0);
    ans.assign(m + 5, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int k = 1; k <= n; k++)
    {
        vector<int> cur;
        cur.clear();
        vector<bool> vis(m + 5, 0);
        for (int i = k; i <= n; i++)
        {
            if (!vis[a[i]])
            {
                cur.push_back(a[i]);
                vis[a[i]] = 1;
            }
            else
            {
                bool flag = 0;
                int sum = 0;
                for (int x : cur)
                {
                    if (flag)
                        sum++;
                    if (x == a[i])
                        flag = 1;
                }
                while (sum--)
                {
                    vis[*cur.rbegin()] = 0;
                    cur.pop_back();
                }
            }
        }
        for (int i = 1; i <= m; i++)
            if (vis[i])
                ans[i]++;
    }
    for (int i = 1; i <= m; i++)
        cout << ans[i] << " ";
    cout << "\n";
    return 0;
}
// 时间不太够了，就不写思路了（咕咕嘎嘎）
// 就是个暴力也没啥思路可写的。。。
// 感觉像脑子题。。
// 评测机，老夫为你指条明路，只要这道题给我一个AC，你将来必有好运在机