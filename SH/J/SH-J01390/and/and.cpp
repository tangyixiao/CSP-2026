#include<bits/stdc++.h>
using namespace std;
int ycn(long long x)
{
	if(x>=1)
	{
		return 10*ycn(x/2)+x%2;
	}
	else
	{
		return x;
	}
 } 
 int w(long long x)
 {
 	int cnt=0;
 	while(x>=0)
 	{
 		x/=10;
 		cnt++;
	 }
	 return cnt;
 }
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200005],b[200005],maxn=-1,dp[200005]={};
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=ycn(a[i]);
	}
	sort(b+1,b+n+1);
	sort(a+1,a+n+1);
	maxn=a[n];
	for(int i=n;i>n-m;i--)
	{
		maxn=maxn&a[i];
	}
	cout<<maxn;
}
