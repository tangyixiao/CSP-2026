#include<bits/stdc++.h>
using namespace std;
#define fre(x) freopen(#x".in","r",stdin);freopen(#x".out","w",stdout)
const int N=2e6+19;
int n,m,a[N];
int ml;
int c[N][2],cnt[N];
int maxx;
int idx,sum;
void add(int a,int k,int cur){
	int t=(a>>k)&1;
	if(c[cur][t]==0)c[cur][t]=++idx;
	add(a,k-1,c[cur][0]);cnt[c[cur][0]]++;
	if(c[cur][1]){
		add(a,k-1,c[cur][1]);
		cnt[c[cur][1]]++;
	}
	if(k==0){
		return;
	}
}
int find(int a){
	int cur=0;
	for(int i=ml;i>=0;i--){
		int t=(a>>i)&1;
		if(c[cur][t]<m)break;
		cur=c[cur][t];
	}
	return cnt[cur];
}
void dfs(int step,int lst,int ans){
	if(step==m+1){
		maxx=max(maxx,ans);
	}
	for(int i=lst+1;i<=n;i++){
		dfs(step+1,i,ans&a[i]);
	}
}
signed main(){
	fre(and);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	ml=__lg(maxx)+1;
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;return 0;
	}
	if(n<=20){
		maxx=0;
		dfs(1,0,(1<<20)-1);
		cout<<maxx;
		return 0;
	}
	for(int i=1;i<=n;i++){
		add(a[i],ml,0);
	}
	for(int i=N;i>=0;i++){
		if(find(i)>=m){
			cout<<i;
			return 0;
		}
	}
	
	return 0;
}
/*
5 3
31 3 1 15 7
*/
