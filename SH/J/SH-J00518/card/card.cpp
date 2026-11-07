#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int a[500005];
int q[500005];
int ans[300005];
int r;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)	cin>>a[i];
	if (n<=500)
	{
		for (int i=1;i<=n;i++)
		{
			r=0;
			for (int j=i;j<=n;j++)
			{
				int pos=0;
				for (int k=1;k<=r;k++)
				{
					if (q[k]==a[j])
					{
						pos=k;
						break;
					}
				}
				if (pos)	r=pos;
				else	q[++r]=a[j];
			}
			for (int j=1;j<=r;j++)
			{
				ans[q[j]]++;
			}
		}
		for (int i=1;i<=m;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	else if (m<=2)
	{
		int ans1=0;
		for (int i=1;i<=n;i++)
		{
			if (a[i]!=a[n])	ans1++;
		}
		cout<<ans1<<" "<<n<<endl; 
	}
	else
	{
		int lst=1;
		for (int i=1;i<=n;i++)
		{
			if (a[i]!=lst)	cout<<i-1<<" ";
			lst=a[i];
		}
		cout<<n;
		cout<<endl;
	}
	return 0;
}
	

