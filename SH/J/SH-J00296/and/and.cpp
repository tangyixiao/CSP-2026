#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[2010],f[2010];
bool flag[2010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i<=n;i++)
		cin >> a[i];
	for (int i = 1;i<=n-m+1;i++)
	{
		int jx=0;
		f[1]=a[i];
		for (int j = i+1;j<=n;j++)
		{
			for (int k = m;k>=2;k--)
			{
				if ((f[k-1]&a[j])>f[k])
				{
					flag[i]=true;
					flag[j]=true;
					jx=j;
					f[k]=(f[k-1]&a[j]);
				}
			}
			flag[jx]=false;
		}
	}
	cout << f[m];
	return 0;
}
