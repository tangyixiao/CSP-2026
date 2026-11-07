#include<iostream>
#include<algorithm>
using namespace std;
int a[100010];int n,m,p,x;
int dfs(int step)
{
    if(step==m)
    {
        p=max(p,x);
        return p;
    }
    for(int i = 1;i <= n;i++)
    {
        x=x&a[i];
        dfs(step+1);
    }
}
int main()
{
    //freopen("and.in","r",stdin);
   // freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    cout << dfs(1);
    return 0;
}
