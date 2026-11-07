#include<bits/stdc++.h>
using namespace std;
long long f[200002],n,m,i,j,a[200002],b,c[1073741824],minn=1e9,maxn=-1e9;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>b;
		maxn=max(b,maxn);
		minn=min(b,minn);
		c[b]++;
	}
	for(j=minn;j<=maxn;j++)
		{
			while(c[j]!=0)
			{
				i++;
		        a[i]=j;
		        c[j]--;
			}
		}
	for(i=1;i<=n;i++)
	    for(j=m;j>=1;j--)
	        if(f[j-1]==0)
	            f[j]=max(f[j],f[j-1]+a[i]);
	        else
	            f[j]=max(f[j],f[j-1]&=a[i]);
	cout<<f[m];
	return 0;
}