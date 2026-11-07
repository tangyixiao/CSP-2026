#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200050],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==m)
	{
		cin>>ans;
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(m==1)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>=ans)
			{
				ans=a[i];
			}
		}
		cout<<ans;
		return 0;
	}
	else if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1] && a[i]>ans)
			{
				ans=a[i];
			}
		}
		cout<<ans;
		return 0;
	}
	else
	{
		cin>>a[1]>>a[2];
		a[1]&=a[2];
		cout<<a[1];
		return 0;
	}
} 
