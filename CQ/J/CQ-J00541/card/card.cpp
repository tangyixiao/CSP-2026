#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;
int a[500005],r[500005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int n,m,cnt=0;
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i],r[a[i]]=i,cnt+=(i>1 && a[i-1]<=a[i]);
	if(cnt>=n-1 && n>=100000000/m)
	{
		for(int i=1; i<=m; i++)
		{
			cout<<r[i];
			if(i!=m) cout<<' ';
		 } 
	}
	else
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=i; j<=n; j++)
			{
				mp[a[j]]++;
				if(r[a[j]]!=j) j=r[a[j]];
			}
		}
		for(int i=1; i<=m; i++)
		{
			cout<<mp[i];
			if(i!=m) cout<<' ';
		}
	}
	return 0;
}
//膜拜W_B_Swift大佬！ RP++!祈祷自己不要挂分 

