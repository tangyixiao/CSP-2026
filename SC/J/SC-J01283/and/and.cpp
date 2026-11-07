#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n,c,m,vis[N];
long long a[N],ans;
void dfs(long long x,long long num){
	if(num==m){
//		cout<<x<<endl;
		ans=max(ans,x);
		return ;
	}
	for(int i=c;i<=n;i++){
		if(!vis[i]){vis[i]=1;dfs(x&a[i],num+1);vis[i]=0;}
	}

}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	for(int i=1;i<=n/2;i++){c=i;vis[i]=1;dfs(a[i],1);vis[i]=0;}
	cout<<ans;
	return 0;
}