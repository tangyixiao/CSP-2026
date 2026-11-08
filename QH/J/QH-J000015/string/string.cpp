#include<bits/stdc++.h>

using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,ans=0;
	long long a1[200005];
	char c[200005];
	
	cin>>n;
	x=n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a1[i]>>c[i];
	}
	long long r=1,l=n;
	while(x>1)
	{
		long long k=min(a1[r],a1[l]);
		if(c[r]!=c[l])
		{
			ans+=k;
		}
		a1[r]-=k;
		a1[l]-=k;
		if(a1[r]==0){
			r+=1;
			x--;
		}
		if(a1[l]==0){
			l-=1;
			x--;
		}
	}
	cout<<ans;
	
	return 0;
}
