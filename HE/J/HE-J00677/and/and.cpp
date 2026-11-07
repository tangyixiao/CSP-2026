#include<bits/stdc++.h>
using namespace std;
int a[101001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==n)
	{
		int o=a[1];
		for(int i=2;i<=n;i++)
		{
			o&=a[i];
		}
		cout<<o;
		return 0;
	}
	if(m==2)
	{
		int ans=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
//				cout<<a[i]<<"&"<<a[j]<<"="<<(a[i]&a[j])<<endl;
			}
		}
		cout<<ans;
		return 0;
	}
	int num=a[n];
	for(int i=n;i>=1 and m!=0;i--)
	{
		m--;
		num&=a[i];
	}
	cout<<num;
	return 0;
}
