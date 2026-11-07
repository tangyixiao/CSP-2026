#include<bits/stdc++.h>
using namespace std;
int ans=-1,a[200005];
int N,M,cnt=-1;
void dfs(int n){
	if(M==0){
		ans=max(ans,cnt);
		return;
	}
	else{
		if(n<N-M+1) dfs(n+1);
		
		int ls=cnt;
		if(cnt==-1) cnt=a[n];
		else cnt&=a[n];
		M--;
		dfs(n+1);
		cnt=ls;
		M++;
		
		return;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>N>>M;
	int Min_a=1e9;
	for(int i=1;i<=N;i++){
		cin>>a[i];
		Min_a=min(Min_a,a[i]);
	}
	if(M==N-1){
		int I=1;
		if(a[1]==Min_a){
			Min_a=-1;
			ans=a[2];
			I=2;
		}else ans=a[1];
		for(int i=I+1;i<=N;i++){
			if(a[i]==Min_a){
				Min_a=-1;
			}else ans&=a[i];
		}
	}else if(N>2000){
		sort(a+1,a+N+1);
		ans=a[N-M+1];
	}else dfs(1);
	cout<<ans;
	return 0;
}
