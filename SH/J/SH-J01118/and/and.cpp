#include<bits/stdc++.h>
using namespace std;


long long n,m,a[200005];
long long ans=0,maxn=0;
void dfs(long long step,long long cnt,long long i){
	if(i==n+1){
		if(step==m){
			ans=max(ans,cnt);
		}
		return;
	}
	if(step==m){
		ans=max(ans,cnt);
		return;
	}
	dfs(step,cnt,i+1);
	dfs(step+1,(cnt&a[i]),i+1);
}


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(0,2097151,1);
		cout<<ans;
	}
	else if(m==1){
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
	}else if(m==n){
		for(int i=1;i<=n;i++){
			maxn=(maxn&a[i]);
		}
		cout<<maxn;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,(a[i])&a[j]);
			}
		}
		cout<<maxn;
	}else if(m==n-1){
		for(int i=1;i<=n;i++){
			long long cntt=2097151;
			for(int j=1;j<=n;j++){
				if(i!=j){
					cntt=(cntt&a[j]); 
				}
			}
			maxn=max(maxn,cntt);
		}
		cout<<maxn;
	}else{
		sort(a+1,a+n+1);
		cout<<a[m];
	}

	
	return 0;
}

