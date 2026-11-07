#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,f[2005][2005],ans=0;
long long a[N];
long long add(int u,int v){
	long long ad=0;long long l[35],k[35];
	long long cntl=0;
	while(u){
		l[cntl++]=u%2;u=u/2;
	}
	long long cntk=0;
	while(v){
		k[cntk++]=v%2;v=v/2;
	}
	for(int i=0;i<=35;i++){
		if(l[i]==k[i])ad+=l[i]<<i;
	}
	return ad;
}
long long dp(int u,int v){
	if(!v||n-u+1<v)return 0;
	if(f[u][v]!=-1)return f[u][v];
	for(int i=u;i<=n;++i){
		f[u][v]=max(dp(u+1,v),add(dp(u+1,v-1),a[u]));
	}
	return f[u][v];
}
int main(){
	memset(f,-1,sizeof(f));
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans=max(ans,a[i]);
	}
	if(m==1){
		cout<<ans;
		return 0;
	}
	cout<<dp(1,m);
	return 0;
}