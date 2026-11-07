#include<bits/stdc++.h>
using namespace std;
int ans[100005],n,m;
int main(){
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//freopen("card5.in","r",stdin);
	//freopen("card5.txt","w",stdout);
	int next[100005];
	cin>>n>>m;
	int a[200005];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=m;i++)
		next[i]=-1;
	for(int i=n;i>=1;i--)
		if(next[a[i]]==-1) next[a[i]]=i;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
			ans[a[j]]++,j=next[a[j]];
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
	return 0;
} 
