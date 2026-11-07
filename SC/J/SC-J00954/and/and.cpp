#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m,ans;
int a[N];
int math(int x)
{
	int n=x+1,cnt=0;
	while(n/=2)
	{
		cnt++;
	}
	return cnt;
}
int fun()
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]+1!=pow(2,math(a[i])))
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans=ans&a[i];
		}
	}
	else if(fun())
	{
		ans=a[n-m+1];
	}
	cout<<ans;
	return 0;
}