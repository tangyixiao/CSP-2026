#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],ans[500001],p[500001];
bool vis=1; 
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i],p[a[i]]=max(p[a[i]],i);//p[a[i]]数组一定单调递增 
		if(a[i-1]>a[i]) vis=0;
	}
	if(vis){
		for(int i=1;i<=m;i++) cout<<n<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		int idx=i;
		while(idx<=n) ans[a[p[a[idx]]]]++,idx=p[a[idx]]+1;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	
	return 0;
}
/*
4 3 
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
我常常追忆过去，生命瞬间定格在脑海。
我该去哪里？我问我自己 
*/
