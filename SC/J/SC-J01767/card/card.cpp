#include<bits/stdc++.h>
using namespace std;
int n,m,a[514514],vis[314514],nxt[314514],sub[514514],sum[514514];
void f(int idx){
	if(idx>n) return;
	if(idx!=vis[a[idx]]) idx=vis[a[idx]];
	sub[idx]++;
	sub[nxt[idx]]--;
	f(nxt[idx]);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int tmp=n+1;
	for(int i=n;i>0;i--){
		if(vis[a[i]]) tmp=i;
		else{
			vis[a[i]]=i;
			nxt[i]=tmp;
		}
	}
	for(int i=n;i>0;i--){
		f(i);
	}
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+sub[i];
	}
	for(int i=1;i<m;i++){
		cout<<sum[vis[i]]<<" ";
	}
	cout<<sum[vis[m]];
	return 0;
}
