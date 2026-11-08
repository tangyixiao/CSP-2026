#include<bits/stdc++.h>
using namespace std;
namespace did
{
	int n,a[200005],cnt,m;
	int main()
	{
		freopen("and.in","r",stdin);
		freopen("and.out","w",stdout);
		cin>>n>>m;
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		cnt=n;
		for(int i=29;i>=0;i--)
		{
			int cn=0,co=0;
			for(int j=1;j<=cnt;j++) co+=(a[j]>>i)&1;
			if(co<m) continue;
			for(int j=1;j<=cnt;j++) if((a[j]>>i)&1) a[++cn]=a[j];
			cnt=cn;
		}
		int ans=(1<<30)-1;
		for(int i=1;i<=cnt;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
}
int main()
{
	did::main();
	return 0;
}
/*
O(30n),100
*/
