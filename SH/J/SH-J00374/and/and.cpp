#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<long long>a(n+1);
int ni[20000]={};
long long mx=-1;
int dip(int a1,int b1)
{
	int x[10000],y=0,x1=0;
	while(a1*b1>0)
	{
		x[y++]=(a1%2)*(b1%2);
		a1/=2;
		b1/=2;
	}
	for(int i=y-1;i>=0;i--)
	{
		x1*=2;
		x1+=x[i];
	}
	return x1;
}
void re(int nl)
{
	if(nl==0)
	{
		long long x=a[ni[0]];
		for(int i=1;i<m;i++)
		{
			x=dip(x,a[ni[i]]);
			
		}
		mx=max(mx,x);
		return;
	}
	for(int i=ni[m-nl-1]+1;i<n;i++)
	{
			
		ni[m-nl]=i;
		re(nl-1);
			
	}return;
}
void fre(int nl)
{
	for(int i=ni[m-nl-1];i<n;i++)
	{
			
		ni[m-nl]=i;
		re(nl-1);
			
	}return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	fre(m);
	cout<<mx;
	return 0;
}

