#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500050];
int lst[500050],ans[500050]; 
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])flag=0;
	}
	if(flag&&(n*m>=20000000000)){
		for(int i=2;i<=n+1;i++){
			if(a[i]!=a[i-1]){
				ans[a[i-1]]=i-1;
			} 
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	for(int i=n;i>=1;i--){
		if(!lst[a[i]]){
			lst[a[i]]=i;
		}
	}
	int now=1;
	for(int i=1;i<=n;i++){
		now=i;
		while(now<=n){
			ans[a[now]]++;
			now=lst[a[now]]+1;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}
/*
6 3
1 1 2 2 3 3
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/
