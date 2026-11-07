#include<bits/stdc++.h>
using namespace std;
int n;
long long a[2000005],x[2000005],y[2000005];
char c[2000005],xx[2000005],yy[2000005];
long long l,k,h1,h2,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	long long v=0;
	for(int i=1;i<=n;i++)
	{
		x[++h1]=a[i];
		xx[h1]=c[i];
		k+=a[i];
		if(k>=l/2)
		{
			v=i;
			x[h1]=l/2-(k-a[i]);
			break;
		}
	}
	y[++h2]=a[v]-x[h1];
	yy[h2]=c[v];
	for(int i=v+1;i<=n;i++)
	{
		y[++h2]=a[i];
		yy[h2]=c[i];
	}
	h1=1;
	for(int i=1;i<=n;i++)
	{
		if(x[h1]>y[h2])
		{
			if(xx[h1]!=yy[h2])
			{
				ans+=y[h2];
			}
			x[h1]-=y[h2];
			y[h2]=0;
			h2--;
		}
		if(x[h1]==y[h2])
		{
			if(xx[h1]!=yy[h2])
			{
				ans+=x[h1];
			}
			x[h1]=0;
			h1++;
			y[h2]=0;
			h2--;
		}
		if(x[h1]<y[h2])
		{
			if(xx[h1]!=yy[h2])
			{
				ans+=x[h1];
			}
			y[h2]-=x[h1];
			x[h1]=0;
			h1++;
		}
	}
	cout<<ans;
	return 0;
}
