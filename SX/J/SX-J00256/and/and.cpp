#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,a[2005],mysum=1;
int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==n)
	{
		for(int i=1;i<=n;i++) mysum&=a[i];
		cout<<mysum;
		return 0;
	}
	else if(m==1)
	{
		for(int i=1;i<=n;i++) mysum=max(mysum,a[i]);
		cout<<mysum;
		return 0;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{	
			int x=a[i];
			for(int j=i+1;j<=n;j++) 
			{
				x&=a[j];
				mysum=max(mysum,x);
			}
		}
		cout<<mysum;
	}
	return 0;
}
