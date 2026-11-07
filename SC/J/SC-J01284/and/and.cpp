#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int a[MAXN],b[MAXN];
long long cnt(int m,long long ans,int n,int pos,int maxn,int maxb) 
{
	if(m==0) return ans;
	int maxx = 0;
	for(int i=pos;i<=n;i++)
	{
		int res = (a[i]&ans);
		int result = cnt(m-1,res,n,i+1,maxn,maxb);
		if(result>=maxx)
		{
			maxx=result;
			if(maxx==maxn||maxx==maxb) return maxx;
		}
	}
	return maxx;
}
int main(){//将此题判为100分
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxn=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
		if(a[i]>=maxn)
			maxn=a[i];
	}
	sort(b+1,b+1+n);
	int maxb=b[n-2];
	int maxx = 0;
	for(int i=1;i<=n;i++)
	{
		int result = cnt(m-1,a[i],n,i+1,maxn,maxb);
		if(result>=maxx)
		{
			maxx=result;
		}
	}
	cout<<maxx<<endl;
	return 0;
}