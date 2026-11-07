#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5,M=2147483647;
int n,m,a[N],sum;
void dfs(int now,int last,int up){
	if(last==m&&now<=n+1){
		sum=max(sum,up);
		return ;
	}
	if(now>n){
		return ;
	}
	int t=up&a[now];
	dfs(now+1,last+1,t);
	dfs(now+1,last,up);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	dfs(0,0,M);
	printf("%d",sum);
	return 0;
}
