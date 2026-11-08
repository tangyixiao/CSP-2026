//?
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define u unsigned
signed main()
{
    ifstream cin("card.in");
    ofstream cout("card.out");
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    vector<int> leave(m, 0);
    for (int i = 0; i < n; i++)
    {
        vector<bool> ap(m, false);
        stack<int> points;
        for (int j = i; j < n; j++)
        {
            if (ap[a[j]])
            {
                while (!points.empty() && points.top() != a[j])
                {
                    int p = points.top();
                    points.pop();
                }
            }
            else
                points.push(a[j]);
            ap[a[j]] = true;
        }
        while (!points.empty())
        {
            leave[points.top()]++;
            points.pop();
        }

        //     vector<int> game(a.begin() + i, a.end());
        //     while (game.size() > m)
        //     {
        //         int delc = 1;
        //         auto p = game.begin(), q = game.end() - delc;
        //         while (p != q)
        //         {
        //             if (*p == *q)
        //             {
        //                 game.erase(p, q);
        //                 delc++;
        //                 break;
        //             }
        //             else
        //                 p++;
        //         }
        //     }
        //     for (auto i : game)
        //         leave[i]++;
        // }
        for (int i = 0; i < m; i++)
            cout << leave[i] << ((i == m - 1) ? '\n' : ' ');
    }
    return 0;
}
