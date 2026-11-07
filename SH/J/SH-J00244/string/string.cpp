#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int m=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	ll ans=0;
	int l=1,r=n;
	while(l<r)
	{
		if(a[l]<=a[r])
		{
			a[r]-=a[l];
			if(c[l]!=c[r])
			{
				ans+=a[l];
			}
			l++;
		}	
		else
		{
			a[l]-=a[r];
			if(c[l]!=c[r])
			{
				ans+=a[r];
			}
			r--;
		}
	}
	cout<<ans;
	return 0;
} 
