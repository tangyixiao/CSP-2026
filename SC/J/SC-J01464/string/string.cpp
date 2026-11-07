#include<bits/stdc++.h>
using namespace std;
long long n,x,ans=0,tot=0,f=0;
char a[10000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		cin>>a[i];
		tot+=x;
	} 
	if(cout<<0;
	long long l=0,r=tot,ans=n+1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(l<=a[mid])
		{
			ans=mid;
			l=mid+1; 
		}
		else r=mid-1;
	}
	cout<<ans;
	return 0; 
} 