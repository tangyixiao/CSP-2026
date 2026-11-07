#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
#define int long long
int a[N];char c[N];
int qum[N];//,hum[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,tot=0,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int ai;char ci;
		cin>>ai>>ci;
		if(ci==c[tot])
			a[tot]+=ai;
		else
		{
			tot++;
			a[tot]=ai;
			c[tot]=ci;
		}
	}
	//for(int i=1;i<=tot;i++)
	//	cerr<<a[i]<<' '<<c[i]<<'\n';
	for(int i=1;i<=tot;i++)
		qum[i]=qum[i-1]+a[i];
	//for(int i=tot;i>=1;i--)
	//	hum[i]=hum[i+1]+a[i];
	//for(int i=1;i<=tot;i++)
	//	cerr<<qum[i]<<' '<<hum[i]<<'\n';
	int qdx=0;
	for(int i=1;i<=tot;i++)
	{
		if(qum[i]*2>=qum[tot])
		{
			qdx=i;
			break;
		}	
	}
	int ans=0;
	if(tot==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=1,j=tot;i<j&&i<=qdx;)
	{
		//if(i==qdx)a[i]-=qum[i]*2-(qum[tot]+1)/2*2-1;
		if(a[i]==a[j])
		{
			if(c[i]!=c[j])ans+=a[i];
			//cerr<<"1";
			a[i]=a[j]=0;
			i++,j--;
			continue;
		}
		if(a[i]>a[j])
		{
			if(c[i]!=c[j])ans+=a[j];
			a[i]-=a[j];
			a[j]=0;
			//cerr<<"2";
			j--;
			continue;
		}
		if(a[i]<a[j])
		{
			if(c[i]!=c[j])ans+=a[i];
			a[j]-=a[i];
			a[i]=0;
			//cerr<<"3";
			i++;
			continue;
		}
	}
	cout<<ans;
	return 0;
} 