#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
bool flagA;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]<a[i-1])
		{
			flagA=true;
		}
	}
	if (m==1)
	{
		cout<<n;
		return 0;
	}
	if (m==2)
	{
		int cnt=0;
		for (int i=1;i<=n;i++)
		{
			if (a[i]!=a[n])
			{
				cnt++;
			}
		}
		if (a[n]==1)
		{
			cout<<n<<" "<<cnt;
		}
		else
		{
			cout<<cnt<<" "<<n;
		}
		return 0;
	}
	if (!flagA)
	{
		for (int i=2;i<=n;i++)
		{
			if (a[i]!=a[i-1])
			{
				cout<<i-1<<" ";
			}
		}
		cout<<n;
		return 0;
	}
	for (int i=1;i<=n;i++)
	{
		vector<int> vec;
		int len=0;
		for (int j=i;j<=n;j++)
		{
			bool flag=false;
			if (vec.find(a[j]))
			{
				cout<<'m';
			}
			for (int k=0;k<len;k++)
			{
				if (vec[k]==a[j])
				{
					flag=true;
				}
			}
			if (flag)
			{
				while (vec[len-1]!=a[j])
				{
					vec.pop_back();
					len--;
				}
			}
			else
			{
				vec.push_back(a[j]);
				len++;
			}
		}
		for (int k:vec)
		{
			ans[k]++;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
