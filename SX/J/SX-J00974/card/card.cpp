#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+10,M=3e5+10;
ll n,m,a[N],b[N],vis[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		ll pos=0;
		for(int j=i;j<=n;j++)
		{
			pos++;
			b[pos]=a[j];
		}
		pos=unique(b+1,b+pos+1)-b-1;
		for(int j=1;j<=pos;j++)
			vis[b[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<vis[i]<<" ";
	return 0;
}