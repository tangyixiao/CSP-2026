#include<cstdio>
#include<iostream> 
#include<cmath> 
using namespace std;
int n,m,a[200010][40],c[40],s=32,Ans;
bool b[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		int y[40],k=0,t;
		while(x)
		{
			y[k++]=x%2;
			x/=2;
		}
		t=k;
		while(k) a[i][--k]=y[k];
	}
	while(1)
	{
		int maxn=-1;
		for(int i=1;i<=n;i++)
			if(!b[i]) for(int j=0;j<s;j++) c[j]+=a[i][j];
		for(int i=s-1;i>=0;i--)
		{
			if(c[i]>=m) maxn=max(i,maxn);
		}
		if(maxn==-1) break;
		s=maxn,Ans+=pow(2,s);
		for(int i=1;i<=n;i++)
			if(!a[i][s]) b[i]=1;
		for(int i=0;i<s;i++) c[i]=0;
	}
	cout<<Ans;
	return 0;
}