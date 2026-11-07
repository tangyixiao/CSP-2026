#include<bits/stdc++.h>
using namespace std;
#define fo(i,begin,end) for(int i=begin;i<=end;++i)
const int N=2e5+5;
int n,m,a[N],ans,qow[32];
bitset<N> G[32];
pair<int,int> dp[32][N];
bool ok=1,p123=1,p234=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m,qow[0]=1;
	fo(i,1,n) G[0][i]=1;
	fo(i,1,30) qow[i]=qow[i-1]*2;
	fo(i,1,n){
		cin>>a[i];
		int f=a[i];
		if(m==1) ans=max(ans,a[i]);
		if(m==n) ans&=a[i];
		if(a[i]>1024) ok=0;
		if(a[i]!=i-1) p234=0;
		fo(j,1,30){
			if(a[i]==qow[j]-1) break;
			if(j==30) p123=0;
		}
		int res=0;
		while(f) G[++res][i]=f%2,f/=2;
	}
	if(m==1||m==n) return cout<<ans,0;
	if(m==2){
		fo(i,1,n) fo(j,i+1,n) ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}
	if(p123){
		sort(a+1,a+n+1,greater<int>());
		ans=a[1];
		fo(i,2,m) ans&=a[i];
		return 0;
	}
	if(p234){
		cout<<n/2+m;
		return 0;
	}
	
	return 0;
}