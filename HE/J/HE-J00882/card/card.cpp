#include<bits/stdc++.h>
using namespace std;
long long m,n;
long long a[500005];
long long ans[300005];
long long vis[300005];
stack<long long> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	scanf("%lld%lld",&n,&m);
	for(long long i;i<=n;i++){
		scanf("%lld",&a[i]);
	} 
	for(long long j=1;j<=n;j++){
		memset(vis,0,sizeof(vis));
		while(s.size()!=0){
			s.pop();
		}
		for(long long i=j;i<=n;i++){
			if(vis[a[i]]==0){
				vis[a[i]]=1;
				s.push(a[i]);
			}else{
				while(s.top()!=a[i]){
					vis[s.top()]=0;
					s.pop();
				}
			}
		}
		while(s.size()!=0){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(long long i=1;i<=m;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}
