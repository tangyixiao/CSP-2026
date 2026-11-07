#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n, m, a[N], t[N], ans[N], nxt[N];
bool vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(!t[a[i]])nxt[i]=0;
		nxt[i]=t[a[i]];
		t[a[i]]=i;
	}
//	for(int i=1;i<=n;i++)cout<<nxt[i]<<" ";
//	cout<<endl;
	for(int k=1;k<=n;k++){
		
		for(int i=k;i<=n;i++){
//			cout<<i<<' ';
			if(!nxt[i]){
				vis[a[i]]=1;
				continue;
			}
			vis[a[i]]=1;
			i=nxt[i]-1;
		}
//		cout<<endl;
		for(int i=1;i<=m;i++){
			if(vis[i])ans[i]++,vis[i]=0;//cout<<i;
//			cout<<endl;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
