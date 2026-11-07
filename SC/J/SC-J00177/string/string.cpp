#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N];
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1,j=n;i<j;)
	{
		if(a[i]>a[j])
		{
			if(c[i]==c[j]) a[i]-=a[j],j--;
			else ans+=a[j],a[i]-=a[j],j--;
		}
		else if(a[i]<a[j])
		{
			if(c[i]==c[j]) a[j]-=a[i],i++;
			else ans+=a[i],a[j]-=a[i],i++;
		}
		else if(a[i]==a[j])
		{
			if(c[i]==c[j]) i++,j--;
			else ans+=a[i],i++,j--;
		}
	}
	cout<<ans;
	return 0;
}
