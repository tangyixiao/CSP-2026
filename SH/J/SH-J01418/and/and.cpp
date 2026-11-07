#include<bits/stdc++.h>
using namespace std;
unsigned long long a,b,c[200005],ans,d[200005],max1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	max1=0;
	for(unsigned long long i=1;i<=a;i++)
	{
		cin>>c[i];
		max1=max(c[i],max1);
	}
	sort(c+1,c+a+1);
	for(unsigned long long i=a;i>=a-b+1;i--)
	{
		d[i-a+b]=c[i];
	}
	unsigned long long e=pow(2,(unsigned long long)log2(max1)+1);
	ans=0;
	while(e!=0)
	{
		bool flag=0;
		for(unsigned long long i=1;i<=b;i++)
		{
			if(d[i]<e)
			{
				flag=1;
			}
			else
			{
				d[i]-=e;
			}
		}
		if(flag==0)
		{
			ans+=e;
		}
		e/=2;
	}
	cout<<ans;
	return 0;
}
