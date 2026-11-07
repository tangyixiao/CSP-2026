#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long Ans=-1;
bool b[200005];
inline void dfs(int x,long long j){
	if(x==m+1)
		Ans = max(Ans,j);
	for(int i=1;i<=n;i++){
		if(!b[i]){
			b[i] = true;
			dfs(x+1,j&a[i]);
			b[i] = false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	if(m==1){
		long long ans=-1;
		for(int i=1;i<=n;i++)
			ans = max(ans,a[i]);
		printf("%lld",ans);
		return 0;
	}else if(m==2){
		long long ans=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++){
				long long x = a[i]&a[j];
				ans = max(ans,x);
			}
		printf("%lld",ans);
		return 0;
	}else if(m==n){
		int ans = a[1];
		for(int i=1;i<=n;i++)
			ans&=a[i];
		printf("%lld",ans);
		return 0;
	}
	for(int i=1;i<=n;i++){
		b[i] = true;
		dfs(2,a[i]);
		b[i] = false;
	}
	printf("%lld",Ans);
	return 0;
} 
