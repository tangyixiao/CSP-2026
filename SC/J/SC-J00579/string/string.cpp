#include<bits/stdc++.h> 
using namespace std;	
int n;
struct edge{
	long long l;
	char w;
}c[100005*2];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long len;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int a;
		char b;
		scanf("%d",&a);
		cin>>b;
		len+=a;
		c[i].l=a,c[i].w=b;
	}
	int l1=1,r=n;
	long long ans=0;
	edge s1=c[l1],s2=c[r];
	while(l1<=r)
	{	
		if(s1.w==s2.w) 
		{
			//cout<<1;
			int minn=min(s1.l,s2.l);
			s1.l-=minn,s2.l-=minn;
			if(s1.l==0) s1=c[++l1];
			if(s2.l==0) s2=c[--r];
		}
		else
		{
			long long minn=min(s1.l,s2.l);
			//cout<<minn;
			ans+=minn;
			s1.l-=minn,s2.l-=minn;
			if(s1.l==0) s1=c[++l1];
			if(s2.l==0) s2=c[--r];
		}
	}
	printf("%lld",ans);
}
