#include<bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second
using namespace std;
const int maxn=5e5+10;
int n,m;
int a[maxn],t[maxn];
int lst[maxn];
int num[maxn];
bool check(){
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}
bitset<maxn> vis;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],num[a[i]]++;
	if(check()){
		for(int i=1;i<=n;i++) t[a[i]]++;
		for(int i=1;i<=m;i++) t[i]+=t[i-1];
		for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	}
	else{
		for(int i=n;i>=1;i--){
			if(vis[a[i]]) continue;
			for(int j=1;j<=m;j++) lst[j]=0;
			for(int j=i;j<=n;j++){
				if(lst[a[j]]){
					for(int k=lst[a[j]];k<j;k++) lst[a[k]]=0;
				}
				lst[a[j]]=j;
			}
			for(int j=1;j<=m;j++){
				if(lst[j]) t[j]+=num[a[i]];
			}
			vis[a[i]]=1;
		}
		for(int i=1;i<=m;i++) cout<<t[i]<<" "; 
	}
	return 0;
}