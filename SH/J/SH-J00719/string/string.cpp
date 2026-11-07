#include<bits/stdc++.h>
using namespace std;
int n;
char c[200005];
long long ans,a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int i=1,j=n,lc=c[1],rc=c[n];
	long long restl=a[1],restr=a[n];
	while(i<=n && j>=1)
	{
		if(restl==restr)
		{
			ans+=(rc!=lc)*restl;
			i++,j--;
			restl=a[i],restr=a[j],lc=c[i],rc=c[j];
		}
		else if(restl<restr)
		{
			ans+=(rc!=lc)*restl;
			i++,restr-=restl;
			restl=a[i],lc=c[i];
		}
		else
		{
			ans+=(rc!=lc)*restr;
			j--,restl-=restr;
			restr=a[j],rc=c[j];
		}
	}
	cout<<ans/2; 
	return 0;
}
