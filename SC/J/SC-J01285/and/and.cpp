#include <bits/stdc++.h>
using namespace std;
int f(int x,int y)
{
	int ans=0,i=1;
	while(x!=0 && y!=0)
	{
		if(x%2==y%2)
		{
			ans=ans+i;
		}
		x=x/2;
		y=y/2;
		i*=2;
	}
	return ans;
}
long long a[10000005];
int main()
{
	freopen("and.in","r","stdin");
	freopen("and.out","w","stdout");	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	int sum=f(a[n],a[n-1]);
	n-=2;
	while(m-2)
	{
		sum=f(a[n],sum);
		n--;
		m--;
	}
	cout<<sum;
	return 0;
}