#include <iostream>
using namespace std;
freopen("and.in", "r");
freopen("and.out", "w";)
int a[200001];    
int n, m, ans;
void dfs(int cnt, int step)
{
    if (cnt == m) return ;
    if (step == n) 
    {
        ans = 0;
        return ;
    }
    for (int i = 0; i <= 1; i++)
    {
        if(i)
        {
            ans = ans & a[step + 1];
            dfs(cnt + 1, step + 1);
        }
        else dfs(cnt, step + 1);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n == m)
    {
        int ans = a[1];
        for (int i = 2; i <= n; i++)
        {
            ans = ans & a[i];
        }
        cout << ans << endl;
        return 0;
    }
    int maxn = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = a[i];
        dfs(1, i);
        maxn = max(maxn, ans);
    }
    cout << maxn << endl;
    return 0;
}