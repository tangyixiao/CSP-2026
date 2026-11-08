#include<bits/stdc++.h>
using namespace std;
const int M=2e5+5;
long long n,ans,a[M];
char b[M];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(l<r)
	{
		if(a[l]<a[r])
		{
			if(b[l]!=b[r]) ans+=a[l];
		}
		else if(a[l]>a[r])
		{
			if(b[l]!=b[r]) ans+=(a[l]-a[r]);
		}
		else if(a[l]==a[r]) 
		{
			if(a[l]>a[l-1])ans+=(a[l]-a[l-1]);
		}
		l++; 
	}
	cout<<ans<<endl;
}
