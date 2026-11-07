#include<bits/stdc++.h>
using namespace std;
long long int n,a[100000005],ans,b,j=1;
string c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	while(j<n)
	{
		if(c[j]!=c[n])
			ans+=min(a[j],a[n]);
			b=a[j];
			a[j]-=min(a[j],a[n]);
			a[n]-=min(b,a[n]);
			if(a[j]==0)
			j++;
			else
			n--;
	}
	cout<<ans;
	return 0;
}