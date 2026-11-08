#include<bits/stdc++.h>
using namespace std;
int n,num[200005];
char c[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i]>>c[i];
	}
	int ll=0,rl=0,ld=1,rd=n;
	ll=num[ld];
	rl=num[rd];
	while(ld<rd)
	{
		if(c[ld]!=c[rd]) sum+=min(ll,rl);
		ll-=min(ll,rl);
		rl-=min(ll,rl);
		if(ll==0)
		{
			ld++;
			ll=num[ld];
		}
		if(rl==0)
		{
			rd--;
			rl=num[rd];
		}
	}
	cout<<sum;
	return 0;
}
