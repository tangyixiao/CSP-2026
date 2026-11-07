#include<bits/stdc++.h>
using namespace std;
struct node{
	int a,b;
}a[200005];
int b[32];
bool cmp(node x,node y)
{
	if(x.b!=y.b)return x.b>y.b;
	return x.a>y.a;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a;
		if(i>=2&&a[i-1].a+1!=a[i].a)flag=0;
		for(int j=0;j<=30;j++)
		{
			if(a[i].a&(1<<j))
			{
				a[i].b++;
			}
		}
	}
	long long ans=2147483647;
	if(flag)
	{
		for(int i=a[n].a,k=1;k<=m;k++,i--)
		{
			ans&=i;
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=m;i++)
	{
		if((ans&a[i].a)==0)
		{
			m++;
			continue;
		}
//		cout<<a[i].a<<endl;
//		cout<<ans<<' '<<a[i].a<<' '<<(ans&a[i].a)<<endl;
		ans&=a[i].a;
	}
	cout<<ans;
	return 0;
}