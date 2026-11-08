#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b,c,d=0,e[1000000],g,h[1000000];
stack<long long> k;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>b>>c;
	for(long long f=1;f<=b;f++)
	{
		cin>>a[f];
		if(a[f]>=a[f-1])
		{
			d++;
			if(a[f]>a[f-1])
			{
				e[a[f-1]]=f-1-e[a[f-1]-1];
			}
		}
	}
	if(d==b)
	{
		for(long long f=1;f<=c-1;f++)
		{
			cout<<e[f]<<" ";
			g+=e[f];
		}
		cout<<b-g;
		return 0;
	}
	for(long long f=1;f<=b;f++)
	{
		e[f]=0;
	}
	for(long long f=1;f<=b;f++)
	{
		while(k.size()!=0)
		{
			k.pop();
		}
		for(long long l=f;l<=b;l++)
		{
			if(h[a[l]]==0)
			{
				h[a[l]]=1;
				k.push(a[l]);
			}
			else
			{
				while(k.top()!=a[l])
				{
					h[k.top()]=0;
					k.pop();
				}
			}
		}
		for(long long l=1;l<=c;l++)
		{
			e[l]+=h[l];
		}
	}
	for(long long f=1;f<=c;f++)
	{
		cout<<e[f]<<" ";
	}
	return 0;
}
