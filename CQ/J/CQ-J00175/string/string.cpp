#include<bits/stdc++.h>
using namespace std;
int n,a,m;
long long s,ans,b[200001],e[200001];
char c[200001];
long long x(int i,int j)
{
	long long li=b[i],ri=min(e[i],s/2),lj=s-e[j]+1,rj=min(s-b[j]+1,s/2);
	//printf("%lld %lld %lld %lld %lld %lld\n",i,j,li,ri,lj,rj);
	if(lj>ri) return -1;
	else if(li>rj) return 0;
	else return ri+rj-li-lj-max(ri,rj)+min(li,lj)+1;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c[i];
		b[i]=e[i-1]+1,e[i]=e[i-1]+a,s+=a;
	}
	for(int i=1;i<=n;i++) if(b[i]<=s/2&&e[i]>=s/2) m=i;
	for(int i=1;i<=n;i++)
	{
		if(b[i]>s/2) break;
		int l=m+1,r=n,mid;
		while(l<=r)
		{
			mid=(l+r)/2;
			//printf("%d-%d %d %d %d\n",i,l,r,mid,x(i,mid));
			if(x(i,mid)) l=mid+1;
			else r=mid-1;
		}
		//printf("%d-%d %d %d\n",i,l,r,mid);
		for(int j=mid;j>=m;j--)
		{
			if(e[j]<=s/2) break;
			if(c[i]==c[j]) continue;
			int ax=x(i,j);
			if(ax>0) ans+=ax;
			else if(ax==-1) break;
		}
	}
	printf("%lld",ans);
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
