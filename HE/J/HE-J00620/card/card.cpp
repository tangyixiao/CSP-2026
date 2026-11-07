#include <bits/stdc++.h>
using namespace std;
int cnt[300005]={0};
int a[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    if(m==1)
    {
        cout << n;
    }
    else if(m==2)
    {
        int mx=-1,mxx=0;
        for(int i=1;i<=n;i++)
        {
            mx=max(mx,a[i]);
            if(mx==a[i])
            {
                mxx++;
            }
        }
        if(mxx==1)
        {
            if(mx!=a[1])
            {
                cout << n << " " << 1;
            }
            else
            {
                cout << n << " " << n;
            }
        }
        else
        {
            if(mx!=a[1])
            {
                cout << n << " " << n;
            }
            else
            {
                cout << 1 << " " << n;
            }
        }
    }
    else if(n==m)
    {
    	for(int i=1;i<=n;i++)
    	{
    		cout << n << " ";
		}
	}
    return 0;
}
