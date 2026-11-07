#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int N=1e5*2+10;
ll n,m;
int a[N];
int ans;
int yu(int x,int y)
{
	int xer[31],yer[31],sum=0;
	for(int i=1;i<=30;i++)
	{
		xer[i]=0;
		yer[i]=0;
	}
	int tx=1;
	while(x>0)
	{
		xer[tx]=x%2;
		x=x/2;
		tx++;
	}
	int ty=1;
	while(y>0)
	{
		yer[ty]=y%2;
		y=y/2;
		ty++;
	}
	int er=1;
	for(int i=1;i<=max(ty,tx);i++)
	{
		if(xer[i]==1&&xer[i]==yer[i])
		{
			sum+=er;
		}
		er=er*2;
	}
	return sum;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ans=a[n];
	for(int i=n-1;i>n-m;i--)
	{
		ans=yu(ans,a[i]);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
