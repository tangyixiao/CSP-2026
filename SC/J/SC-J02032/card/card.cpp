#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,a[500005],ans[300005],st[300005],que[500005];
void solve(int x){
	for(int i=1;i<=m;i++){
		st[i]=0;
	}
	int tail=0;
	for(int i=x;i<=n;i++){
		if(st[a[i]]!=0){
			tail=st[a[i]];
			for(int j=1;j<=m;j++){
				if(st[j]>st[a[i]]) st[j]=0;
			}
		}else{
			que[++tail]=a[i];
			st[a[i]]=tail;
		}
//		for(int j=1;j<=n;j++){
//			cout<<que[j]<<" ";
//		}
//		cout<<tail<<"\n";
	}
	for(int i=1;i<=tail;i++){
//		cout<<que[i]<<" ";
		ans[que[i]]++;
	}
//	cout<<"\n";
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		solve(i);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}