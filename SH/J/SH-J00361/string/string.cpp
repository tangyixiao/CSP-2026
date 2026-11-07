#include<bits/stdc++.h>
using namespace std;
int n;
long long ans,sum;
long long a[200010];
char c[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	long long i=1,j=n,ni=a[1],nj=a[n];
	while(1)
	{
		if(i>=j)
		{
			cout<<ans;
			break;
		}
		long long minn=min(ni,nj);
		ni-=minn;
		nj-=minn;
		if(c[i]!=c[j]) ans+=minn;
		if(ni==0)
		{
			i++;
			ni=a[i];
		}
		if(nj==0)
		{
			j--;
			nj=a[j];
		}
	}
	return 0;
}
