#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5,MAXM=3e5+5;
int a[MAXN];
bool ta=1;
int ans[MAXM];
int n,m;
int pre[MAXN],lst[MAXM],nxt[MAXN];
int b[MAXM];
signed main(){
//	freopen("Dsub.txt","r",stdin);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) ta=0;
		pre[i]=lst[a[i]];
		lst[a[i]]=i;
	}
//	if(ta){
//		for(int i=1;i<=n;i++){
//			if(a[i]!=a[i+1]){
//				ans[a[i]]=i;
//			}
//		}
//		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
//		return 0;
//	}
	nxt[n+1]=n+2;
	for(int i=1;i<=n;i++) nxt[i]=i+1;
	for(int i=1;i<=n;i++) nxt[pre[i]]=i+1;
	for(int s=1;s<=n;s++){
		for(int i=s;i<=n;i=lst[a[i]]+1){
			if(b[a[i]]!=s) ans[a[i]]++;
			b[a[i]]=s;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

*/