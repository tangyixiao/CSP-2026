#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10; 
int n,m;
int a[N],cnt[N],len,l[N],tot[N];
map<int,int> last;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	bool ji=false,con=false;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(last[a[i]])
		{
			ji=true; 
		}
		last[a[i]]=i;
	}
	if(!ji)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<last[a[i]]<<' ';
		}
	}
	for(int i=1;i<=n;i++)
	{
		int j=i;
		cnt[a[j]]++;
		j=last[a[i]];
		while(j<n)
		{
			j++;
			cnt[a[j]]++;
			j=last[a[j]];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<' ';
	}
	return 0;
}
