#include<bits/stdc++.h>
using namespace std;
long long a[10000000],b[10000000],s[1000000],f[1000000];
long long la,lb,mm=0,maxn=0;
int n,m;
void t(int x)
{	
	int z;
	z=f[x];
	if(x==1)
	{
		for(int i=0;i<=la;i++) a[i]=0;
		la=-1;		
		while(z!=0)
		{
			a[++la]=z%2;
			z/=2;
		}
	}
	else
	{
		lb=-1;		
		while(z!=0)
		{
			b[++lb]=z%2;
			z/=2;
		}
		la=min(la,lb);
		for(int i=0;i<=la;i++)
		{
			if(a[i]==1&&b[i]==1) a[i]==1;
			else a[i]=0;
		}
		for(int i=0;i<=lb;i++) b[i]=0;
	}
}
void dg(int step,int sum)
{
	for(int i=step;i<=n;i++)
	{
		if(sum==m)
		{
			f[sum]=s[i];
			sum=0;
			for(int j=1;j<=m;j++)
			{
				t(j);
				f[j]=0;
			}
			for(int j=0;j<=la;j++) mm+=pow(2,j);
			maxn=max(maxn,mm);
			mm=0;
		}
		else
		{
			f[sum]=s[i];
			dg(i+1,sum++);
		} 
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)  cin>>s[i];
	if(m==1)
	{
		for(int i=1;i<=n;i++)  maxn=max(s[i],maxn);
		cout<<maxn;
		return 0; 
	} 
	dg(1,1);
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
