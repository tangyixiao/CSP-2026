#include <bits/stdc++.h>
using namespace std;
long long a[200050];
long long b[200050]; 
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
	for(int i=30;i>=1;i--)
	{
		
		int cnt=0;
		long long pos=1<<(i-1);
		
		for(int j=n;j>=1;j--)
		{
			if((a[j]&pos)!=0)
			{
				cnt++;
				b[cnt]=a[j];
			}
		}
		
		
		if(cnt>=m)
		{
			memset(a,0,sizeof(a));
			for(int j=1;j<=cnt;j++)
			{
				a[j]=b[j];
			}
			n=cnt;
		}
	}
	long long ans=a[1];
	for(int j=2;j<=m;j++)
	{
		ans=ans&a[j];
	}
	cout<<ans;
	return 0;
}
