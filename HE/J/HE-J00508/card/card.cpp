#include <bits/stdc++.h>
using namespace std;

int n,m,a[210000],cmt[210000];
bool b[210000];
int vis[210000];map<int,int> mp;

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            b[j] = false;
            vis[j] = 0;
        }
        mp.clear();
        int cnt = 0;
        for(int j = i;j <= n;j++)
        {
            if(vis[a[j]])
            {
                int x = vis[a[j]];
                for(int k = x;k <= cnt;k++)
                {
                    b[mp[k]] = false;
                    vis[mp[k]] = 0;
                    mp[k] = 0;
                }
                cnt = x - 1;
            }
            int x = a[j];
            cnt++;
            vis[x] = cnt;
            b[x] = true;
            mp[cnt] = a[j];
		}
        for(int j = 1;j <= m;j++)
        {
            if(b[j])
            {
                cmt[j]++;
            }
        }
    }
    for(int i = 1;i <= m;i++)
    {
        cout << cmt[i] << " ";
    }
}
