#include <bits/stdc++.h>
using namespace std;
char r2;
long long n,r1,tot,lt;
struct lxd{
	long long len;
	char w;
	int ne,la;
}a[500010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	a[0].w='A';
	for(int i = 1;i<=n;i++)
	{
		cin>>r1>>r2;
		if(r2==a[tot].w)
		{
			a[tot].len+=r1;
		}
		else
		{
			a[++tot].w=r2;
			a[tot].len=r1;
			a[tot].la=tot-1;
			a[tot-1].ne=tot;
		}
		lt+=r1;
	}
	long long x=0,y=(lt+1)/2;
	int k = 1;
	a[0].ne=1;
	a[tot].ne=0;
	a[0].la=tot;
//	cout<<lt<<" "<<y<<endl;
	while(k!=0)
	{
		x+=a[k].len;
		if(x>=y)
		{
//			cout<<k<<endl;
			if(lt%2==0)
			{
				a[++tot].len=x-y;
				a[k].len-=x-y;
				a[a[k].ne].la=tot;
				a[tot].ne=a[k].ne;
				a[tot].la=k;
				a[k].ne=tot;
				a[tot].w=a[k].w;
			}
			if(lt%2==1)
			{
				a[++tot].len=x-y;
				a[k].len-=x-y+1;
				a[a[k].ne].la=tot;
				a[tot].ne=a[k].ne;
				a[tot].la=k;
				a[k].ne=tot;
				a[tot].w=a[k].w;
			}
			break;
		}
		k=a[k].ne;
	}
	int l = a[0].ne,r=a[0].la;
	long long ans=0,z;
//	int ls=a[0].ne;
//	while(ls!=0)
//	{
//		cout<<ls<<" "<<a[ls].len<<" "<<a[ls].ne<<" "<<a[ls].la<<" "<<a[ls].w<<endl;
//		ls=a[ls].ne;
//	}
//	cout<<k<<endl;
	while(r!=k)
	{
		z=min(a[l].len,a[r].len);
		if(a[l].w!=a[r].w)
		{
			ans+=z;
		}
		a[r].len-=z;
		a[l].len-=z;
		if(a[r].len!=0)r=a[r].ne;
		if(a[l].len!=0)l=a[l].la;
		r=a[r].la;
		l=a[l].ne;
//		cout<<l<<" "<<r<<" "<<ans<<endl;
	}
	cout<<ans;
	return 0;
}
