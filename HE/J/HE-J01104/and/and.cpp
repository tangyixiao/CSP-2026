#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int a[N];
int ans;
int main()
{
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}else if(m==n)
	{
		ans=a[1];
		for(int i=1;i<=n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}
	else 
	{
		if(a[n]==a[n-1])cout<<a[n];
		else if(a[n]-a[n-1]!=1)cout<<(a[n]&a[n-1]);
		else if(m==2)cout<<a[n-1];
		else cout<<a[n];
	}
	return 0;
}

