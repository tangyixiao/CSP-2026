#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m;
int a[200005];
bool cmp(int x,int y)
{
	return x>y;
}
void solve1()
{
	int ans=a[1];
	for(int i=2;i<=n;i++)
		ans=ans&a[i];
	cout<<ans<<endl;
}
void solve2()
{
	int ans=a[1];
	for(int i=1;i<=n;i++)
		ans=max(ans,a[i]);
	cout<<ans<<endl;
}
void solve4()
{
	int ans=-1e9;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int x=a[i]&a[j];
			ans=max(ans,x);
		}
	}
	cout<<ans<<endl;
}
void solve5()
{
	sort(a+1,a+n+1,cmp);
	cout<<a[m]<<endl;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==n)
		solve1();
	else if(m==1)
		solve2();
	else if(m==2)
		solve4();
	else
		solve5();
	return 0;
}
