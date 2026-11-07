#include<bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5, M = 3e5 + 5;
int n, m, a[N], ans[M];
bool flag[N];
struct node
{
    bool vis;
    int last;
}card[N];

int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <= n; i++)
    {
        for(int x = 1; x <= m; x++) { card[x].vis = false; card[x].last = 0; }
        for(int x = 1; x <= n; x++) flag[x] = true;

        for(int j = i; j <= n; j++)
        {
            if(card[a[j]].vis == false)
            {
                card[a[j]].vis = true;
                card[a[j]].last = j;
            }
            else
            {
                if(flag[card[a[j]].last] == false) { card[a[j]].vis = true; card[a[j]].last = j; }
                else
                    for(int k = card[a[j]].last; k < j; k++)
                    {
                        card[a[k]].vis = false;
                        flag[k] = false;
                    }
                card[a[j]] = {true, j};
            }
        }
        for(int j = i; j <= n; j++)
            if(card[a[j]].vis == true && flag[j] == true)
                ans[a[j]]++;
    }
    for(int i = 1; i <= m; i++) cout << ans[i] << " ";
    cout << "\n";
    return 0;
}
