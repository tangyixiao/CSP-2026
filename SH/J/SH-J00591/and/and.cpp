#include<bits/stdc++.h>

using namespace std;

struct ll
{
	string jz;
	int o,le;
};

ll b[200005];
char q[200005];

bool cmp(ll x,ll y)
{
	if(x.le==y.le)
	{
		for(int i=0;i<x.le;i++)
		{
			if(x.jz[i]!=y.jz[i])
			{
				return x.jz[i]>y.jz[i];
			} 
		}
	}
	else
	{
		return x.le>y.le;
	}
	return true;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,k,sum=0;
	cin>>a>>k;
	for(int i=1;i<=a;i++)
	{
		int c,l=0;
		cin>>c;
		b[i].o=c;
		if(c==0)
		{
			q[l]='0';
		}
		int p=c,sum=0;
		while(p)
		{
			if(p%2)
			{
				q[l]='1';
			}
			else
			{
				q[l]='0';
			}
			p/=2;
			l++;
		}
		for(int j=1;j<=l;j++)
		{
			b[i].jz[j]=q[l-j];
			sum++;
		}
		b[i].le=sum;
	}
	sort(b+1,b+a+1,cmp);
	sum=b[1].o;
	for(int i=2;i<=k;i++)
	{
		sum=sum&b[i].o;
	}
	cout<<sum;
	return 0;
}
