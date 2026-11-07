#include <bits/stdc++.h>
using namespace std;
long long a[200005],m,n,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	if(m==1)cout<<a[n-1];
	else if(m==2)
	{
		for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)
		{
			ans=max(ans,a[i]&a[j]);
		}
		cout<<ans;
	}
	else if(m==n)
	{
		for(int i=1;i<n;i++)a[0]=a[0]&a[i];
		cout<<a[0];
	}
	else if(m==n-1)
	{
		for(int i=2;i<n;i++)a[1]=a[1]&a[i];
		cout<<a[0];
	}
	return 0;
}
