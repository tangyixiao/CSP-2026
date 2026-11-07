#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
long long sum,x[200005],y[200005];
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
		x[i]=x[i-1]+a[i];
	}
	for(int i=n;i>=1;i--)
	    y[i]=y[i+1]+a[i];
	int ans=0,l=1,r=sum,i=1,j=n;
	while(l!=r)
	{
		if(c[i]!=c[j])
		{
			ans++;
		}
		l++;r--;
		if(l==x[i]) i++;
		if(r==y[j]) j--;
	}
	cout<<ans;
	return 0;
}
