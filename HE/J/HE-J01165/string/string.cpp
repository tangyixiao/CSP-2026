#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int n;
	cin>>n;
	int sum=0;
	char s[200005];
	long long nu[200005];
	for(int i=1;i<=n;i++)
	{
		cin>>nu[i];
		cin>>s[i];
		if(s[i]==s[i-1]&&i!=1)
		{
			nu[i-1]+=nu[i];
			n--;i--;
		}
	}
	long long ans=0;
	int l=0,r=n;
	while(l<r)
	{
		if(nu[l]==0) l++;
		if(nu[r]==0) r--;
		if(s[l]!=s[r])
		{
			ans+=min(nu[l],nu[r]);
		}
		if(nu[l]>=nu[r])
			{
				nu[l]-=nu[r];
				nu[r]=0;
			}
			else
			{
				nu[r]-=nu[l];
				nu[l]=0;
			}	
	}
	cout<<ans;
	return 0;
}
