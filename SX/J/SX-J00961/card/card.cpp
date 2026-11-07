#include<bits/stdc++.h>
using namespace std;
struct st{
	long long a,b,c;
} b[500010];
long long a[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,s=1,l=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(s<=n)
	{
		for(int i=s;i<=n;i++)
		{
			if(b[a[i]].a==0)
			{
				b[a[i]].a++;
			}
			else
			{
				b[a[i]].a++;
				b[a[i]].b=i;
			}
		}
		for(int i=s;i<=n;i++)
		{
			if(b[a[i]].a==1)
			{
				b[a[i]].c++;
			}
			else if(b[a[i]].a>1)
			{
				b[a[i]].c++;
				i=b[a[i]].b;
			}
			else
			{

			}
			b[a[i]].a=0;
			b[a[i]].b=0;
		}
		s++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i].c<<" ";
	}
	return 0;
}