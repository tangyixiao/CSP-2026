#include<bits/stdc++.h>
using namespace std;
int n,m,maxn;
int a[200005];
int bits(int n,int lon)
{
	if(n==0)
	{
		return lon;
	}
	n=n/2;
	lon++;
	bits(n,lon);
}
long long ans;
int b[20005];
int main()
{
	freopen("and5.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--)
	{
		int c=bits(a[i],0);
		//cout<<c<<' ';
		b[c]++;
		maxn=max(maxn,c);
	}
	int bj=1,q=0;
	for(int i=maxn;i>=1;i--)
	{
		//cout<<i<<' '<<b[i]<<' ';
		if(b[i]>=m)
		{
			//cout<<b[i]<<"yes"<<m<<endl;
			bj=i;
			break;
		}
		else
		{
			q+=b[i];
		}
	}
	//cout<<q<<' ';
	ans=a[n-q];
	for(int i=n-1-q;i>=1;i--)
	{
		if(m==0)
		{
			break;
		}
		ans=ans&a[i];
		m--;
	} 
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}