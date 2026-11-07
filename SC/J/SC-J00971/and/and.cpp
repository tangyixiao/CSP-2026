#include<bits/stdc++.h>
using namespace std;
long long n,m,maxn=-1;
long long a[500005];
long long sum[500005];
void dfs(long long u,long long val,long long used){
	if(used==m){
		maxn=max(val,maxn);
		return ;
	}
	if(u==n+1)return ;
	dfs(u+1,val&a[u],used+1);
	dfs(u+1,val,used);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long me=(long long)pow(2,32)-1;
	cin>>n>>m;
	for(long long i=1;i<=n;i++)cin>>a[i];
	if(n<=20){
    	dfs(1,me,0);
    	cout<<maxn;	
	}else{
		if(m==1){
			for(long long i=1;i<=n;i++){
				maxn=max(a[i],maxn);
			}
			cout<<maxn;
		}else if(n==m){
			maxn=me;
			for(long long i=1;i<=n;i++){
				maxn=(maxn&a[i]);
			}
			cout<<maxn;
		}else if(m==2){
			for(long long i=1;i<=n;i++){
				for(long long j=1;j<=n;j++){
					if(i==j)continue;
					maxn=max(maxn,(a[i]&a[j]));
				}
			}
			cout<<maxn;
		}else if(m==n-1){
			sum[0]=me;
			for(int i=1;i<=n;i++){
				sum[i]=(a[i]&sum[i-1]);
			}
			for(int i=1;i<=n;i++){
				long long l=sum[0]&sum[i+1];
				long long r=sum[i+1]&sum[n+1];
				maxn=max(maxn,l&r);
			}
			cout<<maxn;
		}else{
			maxn=me;
			sort(a+1,a+n+1,greater<int>());
			for(int i=1;i<=m;i++){
				maxn=(maxn&a[i]);
			}
			cout<<maxn;
		}
	}
	return 0;
}