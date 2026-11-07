#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000005],ans;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	if(m==1)
	{
		cout<<n;
		return 0;
	}
	if(m==2)
	{
		if(a[n]==2)
		{
			for(int i=1;i<=n;i++)
			if(a[i]==1)
			ans++;
			cout<<ans<<" "<<n;
		}
		else
		{
			for(int i=1;i<=n;i++)
			if(a[i]==2)
			ans++;
			cout<<n<<" "<<ans;
		}
	}
	return 0;
}