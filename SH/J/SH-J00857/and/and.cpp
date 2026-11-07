#include <bits/stdc++.h>
using namespace std;
int n,m,a;
int main()
{
	freopen("ans.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(i==1) ans=i;
		else ans&=i;
	}
	cout<<ans;
	return 0;
}
