#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10, M = 3e5 + 10;
int n, m, a[N], ans[N], lp[N];
void subtaskA()
{
    for (int i = 1; i <= n; i ++)
    {
        printf("%d ", lp[i]);
    }
    puts("");
}
void qw()
{
    for (int s = 1; s <= n; s ++)
    {
        vector<int> desk, p(M, -1);
        for (int i = s; i <= n; i ++)
        {
            if (p[a[i]] == -1)
            {
                desk.push_back(a[i]);
                p[a[i]] = desk.size() - 1;
                // printf("pushed %d\n", a[i]);
            }
            else
            {
                // printf("deleting from %d\n", p[a[i]]);
                for (int j = desk.size() - 1; j >= p[a[i]] + 1; j --)
                {
                    p[a[j]] = -1;
                    desk.pop_back();
                }
                // desk.push_back(a[i]);
            }
            // for (int i = 0; i < desk.size(); i ++)
            // {
            //     int num = desk[i];
            //     printf("%d ", num);
            // }
        }
        for (int i = 0; i < desk.size(); i ++)
        {
            int num = desk[i];
            // printf("%d ", num);
            ans[num] ++;
        }
        // puts("");
    }
    for (int i = 1; i <= m; i ++)
    {
        printf("%d ", ans[i]);
    }
    puts("");
}
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d %d", &n, &m);
    bool A = 1;
    for (int i = 1; i <= n; i ++)
    {
        scanf("%d", &a[i]);
        lp[a[i]] = max(lp[i], i);
        if (a[i] < a[i - 1])
        {
            A = 0;
        }
    }
    if (A)
    {
        subtaskA();
    }
    else
    {
        qw();
    }
    // for (int s = 1; s <= n; s ++)
    // {
    //     int siz = 0;
    //     vector<int> desk(N), p(M, 0);
    //     for (int i = s; i <= n; i ++)
    //     {
    //         if (!p[a[i]] || siz < p[a[i]])
    //         {
    //             desk[++ siz] = a[i];
    //             p[a[i]] = siz;
    //             // printf("desk.push_back(%d), ", a[i]);
    //             // printf("p[a[i]]=%d\n", siz);
    //         }
    //         else
    //         {
    //             siz = p[a[i]];
    //             // printf("%d same, siz pointer moved to %d\n", a[i], siz);
    //         }
    //     }
    //     for (int i = 1; i <= siz; i ++)
    //     {
    //         // printf("%d %d\n", desk[i], p[desk[i]]);
    //         ans[desk[i]] ++;
    //     }
    //     // puts("");
    // }
    // for (int i = 1; i <= m; i ++)
    // {
    //     printf("%d ", ans[i]);
    // }
    // puts("");
    return 0;
}