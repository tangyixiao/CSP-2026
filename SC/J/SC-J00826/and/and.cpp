#include<bits/stdc++.h> 
using namespace std;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	long long n,m,a[200010],maxx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		long long sum=a[i];
		for(int j=i+1;j<=i+m-1;j++)
		{
			sum=(sum&a[j]);
		}
		if(sum>maxx)
		{
			maxx=sum;
		}
	}
	cout<<maxx;
	return 0;
}