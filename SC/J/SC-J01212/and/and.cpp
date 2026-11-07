#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int unchange[31]={0,1,3,7,15,31,63,127,255,511,1023,2047,4095,8191,16383,32767,65535,131071,262143,524287,1048575,2097151,4194303,8388607,16777215,33554431,67108863,134217727,268435455,536870911,1073741823};
int a[MAXN],vis[MAXN],n,m;
int lowbit(int x){
	return x&(-x);
}
bool cmp(int x,int y){
	if(__builtin_popcount(x)==__builtin_popcount(y)) return lowbit(x)>lowbit(y);
	return __builtin_popcount(x)>__builtin_popcount(y);
}
int check(int x){
	for(int i=1;i<=31;i++){
		if(x==unchange[i])
			return 0;
	}
	return 1;
}
int dfs(int x,int cnt){
	if(cnt>m) return INT_MAX;
	int ans=a[x],tmp=0;
	vis[x]=1;
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		int _tmp=a[x];
		_tmp&=dfs(i,cnt+1);
		tmp=max(_tmp,tmp);	
	}
	ans=tmp;
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxn=0,flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(a[i],maxn);
		flag-=check(a[i]);
	}
	sort(a+1,a+n+1,cmp);
	if(m==1) {cout<<maxn;return 0;}
	if(flag==1) {cout<<a[m];return 0;}
	maxn=0;
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		maxn=max(maxn,dfs(i,1));
	}
	cout<<maxn;
	return 0;
}