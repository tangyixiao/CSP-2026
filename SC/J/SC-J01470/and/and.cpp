#include<bits/stdc++.h>
using namespace std;

int n,m,a[20010],s,k,g,p,t;
string v[20010];
bool b[20010];

void f(int x,int w)
{
	v[w]+=x%2+'0';
	if(x<=1) return;
	f(x/2,w);
}

int main()
{
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	g=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f(a[i],i);
		int r=v[i].size();
		s=max(s,r);
	}
	for(int i=s-1;i>=0;i--)
	{
		k=0;
		for(int j=1;j<=n;j++)
		{
			if(v[j][i]=='1'&&!b[j])
			{
				k++;
			}
		}
		if(k>=m)
		{
			for(int j=1;j<=n;j++)
		    {
			    if(v[j][i]!='1'&&!b[j])
			    {
			    	b[j]=1;
			    	g--;
			    	
				}
		    }
		}
		if(n-g==m)
		{
			for(int j=1;j<=n;j++)
		    {
			    if(b[j]==0)
			    {
			    	if(p==0) p=a[j];
			    	 else p&=a[j];
				}
		    }
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			if(p==0) p=a[i];
			 else p&=a[i];
			t++;
		}
		if(t==m) break;
	}
	cout<<p;
}