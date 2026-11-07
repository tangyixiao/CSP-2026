#include <bits/stdc++.h>
using namespace std;
int a[5005],f[5005][5005];
bool F[5005];
int main()
{
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;i++) 
	{
		cin >> a[i];
	}
	for (int i=1;i<=n;i++)
	{
		int b[n],cnt=1;
		for (int j=i;j<=n;j++)
		{
			if (f[i][a[j]]==0)
			{
				b[cnt]=a[j];
				f[i][a[j]]=1;
				cnt++;
			}
			else
			{
				while(f[i][a[j]]==1)
				{
					cnt--;
					if (b[cnt]==a[j])
					{
						f[i][a[j]]=0;
						break;
					}
					f[i][b[cnt]]=0;
					b[cnt]=0;
				}
			}	
		}
		if (b[cnt]==a[i])
		{
			F[i]=1;
		}
	}
	int ans=0; 
	for (int i=1;i<=n;i++)
	{
		ans=0;
		if (F[i]==1)
		{
			for (int j=1;j<=n;j++)
			{
				if (f[j][a[i]]==1) ans++;
			}
		}
		cout << ans << " ";
	}
	return 0;
}
