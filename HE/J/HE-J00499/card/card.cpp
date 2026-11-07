#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+500;
int n,m,a[N],ans[N];
int s[N],p=0,dis[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]=1;
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]*=i;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
1 2 1 3 2 1 3 1 3 3
4 3
1 2 1 3
*/
