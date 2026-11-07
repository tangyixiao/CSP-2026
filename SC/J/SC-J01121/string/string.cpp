#include<bits/stdc++.h>
using namespace std;
int n,l,r;
long long tot,x[200005];
char xx[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>xx[i];
	}
	r=n;
	for(int i=1;;i++)
	{
		l=i;
		if(l==r)break;
		if(xx[l]==xx[r])
		{
			if(x[l]==x[r])
			{
				r--;
			}
			else if(x[l]>x[r])
			{
				x[l]-=x[r];
				r--;
				i--;
			}
			else if(x[r]>x[l])
			{
				x[r]-=x[l];
			}
		}
		else
		{
			if(x[l]==x[r])
			{
				r--;
				tot+=x[l];
			}
			else if(x[l]>x[r])
			{
				tot+=x[r];
				x[l]-=x[r];
				r--;
				i--;
			}
			else if(x[r]>x[l])
			{
				tot+=x[l];
				x[r]-=x[l];
			}
		}
	}
	cout<<tot;
	return 0;
} 