#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans;
bool v[200005];
void dfs(long long num,long long sum){
	if(num==m){
		ans=max(ans,sum);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			v[i]=1;
			dfs(num+1,sum&a[i]);
			v[i]=0;
		}
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		v[i]=1;
		dfs(1,a[i]);
		v[i]=0;
	}
	printf("%lld",ans);
	return 0;
}
