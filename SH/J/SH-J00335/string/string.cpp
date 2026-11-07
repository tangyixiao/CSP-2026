#include<bits/stdc++.h>
using namespace std;
struct node{long long x;char c;};
node a[200501];
node x[200501],y[200501];
int n1,n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long l=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].c;
		l+=a[i].x;
	}
	long long l1=0;
	int xl=0,yl=0;
	for(int i=1;i<=n;i++)
	{
		if(l%2)
		{
			l1+=a[i].x;
			if(l1<=l/2) x[++xl]={a[i].x,a[i].c};
			else if(l1==l/2+1&&a[i].x!=1) x[++xl]={a[i].x-1,a[i].c};
			else if(l1>l/2+1&&l1-a[i].x<l/2) x[++xl]={l/2-l1+a[i].x,a[i].c},y[++yl]={l1-l/2-1,a[i].c};
			else if(l1>l/2+1&&l1-a[i].x==l/2) y[++yl]={a[i].x-1,a[i].c};
			else if(l1>l/2+1&&l1-a[i].x>l/2) y[++yl]={a[i].x,a[i].c};
		}
		else
		{
			l1+=a[i].x;
			if(l1<=l/2) x[++xl]={a[i].x,a[i].c};
			else if(l1>l/2+1&&l1-a[i].x<l/2) x[++xl]={l/2-l1+a[i].x,a[i].c},y[++yl]={l1-l/2,a[i].c};
			else if(l1>l/2+1&&l1-a[i].x>=l/2) y[++yl]={a[i].x,a[i].c};
		}
	}
	long long i=1,j=yl,q=x[1].x,w=y[yl].x,ans=0;
	while(i<=xl&&j>=1)
	{
		if(x[i].c==y[j].c) ;
		else ans+=min(q,w)-max(q-x[i].x,w-y[j].x);
		if(q<w)
		{
			i++,q+=x[i].x;
		}
		else if(q>w)
		{
			j--,w+=y[j].x;
		}
		else i++,j--,q+=x[i].x,w+=y[j].x;
	}
	cout<<ans;
	return 0;
}
