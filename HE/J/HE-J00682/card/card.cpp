#include<bits/stdc++.h>
using namespace std;
long long n,m;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	vector<long long> a(n+1),c,ma(m+1,0);
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		c.clear();
		for(int k=i;k<=n;k++)
		{
			bool flag=0;int mj=0;
			for(int j=0;j<c.size();j++)
				if(c[j]==a[k])
				{
					flag=1;mj=j;break;
				}
			if(flag) for(int j=c.size()-1;j>=mj;j--) c.pop_back();
			c.push_back(a[k]);
		}
		for(int j=0;j<c.size();j++) 
		{
			ma[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ma[i]<<' ';
	return 0;
}
