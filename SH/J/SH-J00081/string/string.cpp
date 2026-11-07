#include<bits/stdc++.h>
using namespace std;
char c[200005];
int a[200005];
long long b[200005];
long long o=1,l=1,r,d;
long long ans; 
long long len;
int main()
{	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	d=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		r+=a[i];
		len+=a[i];
		b[i]=b[i-1]+a[i];
	}
	while(l<r)
	{	
		if(b[o]<l)
		{
			o++;
		}
		if((b[n]-b[d-1])<(len-r+1))
		{	
			d--;
		}
		if(c[o]!=c[d])
		{
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}
