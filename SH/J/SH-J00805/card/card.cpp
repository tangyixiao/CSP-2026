#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<set>
#include<map>
#include<cstdio>
#include<cmath>
#include<cctype>
using namespace std;
int w=0;
//// 
/// 全局变量/函数区
int n,m;
int a[500010];
int b[300010];
int ans[300010];

//// 
/// 主函数区 
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if (m==1)
	{
		cout<<n<<endl;
		return 0;
	}
	if (m==2)
	{
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int cnt=0;
		for (int i=1;i<=n;i++)
		{
			if (a[i]!=a[n])cnt++;
		}
		if (a[n]==1)cout<<n<<' '<<cnt<<endl;
		else cout<<cnt<<' '<<n<<endl;
		return 0;
	}
	int SPflag1=1;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]=i;
		if (a[i]<a[i-1])SPflag1=0;
	}
	if (SPflag1)
	{
		for (int i=n;i>=1;i--)
		{
			if (ans[a[i]]==0)ans[a[i]]=i;
		}
		for (int i=1;i<=m;i++)
		{
			cout<<ans[i]<<' ';
		}
		cout<<endl;
		return 0;
	}
	for (int k=1;k<=n;k++)
	{
		int cur=k;
		while (cur<=n)
		{
			cur=b[a[cur]];
			ans[a[cur]]++;
			cur++;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	cout<<endl;
	return (0>w<0);
}
