#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
string c[10000005],b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=1;j<=a[i];j++)
		{
			cin>>b;
			c[i]+=b;
		}
	} 
	int sum=0;
	int l=1,r=n;
	int mid=(l+r)/2;
	for(int i=l;i<=mid+1;i++) 
	{
		if(c[i]!=c[n-i+1]) 
		{
			sum++;
		}
	}
	cout<<sum;
}
