#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],cf2[30]={1};
bool v[1][30];
int afy(int x,int y){
	int sum=0;
	for(int i=0;i<=1;i++) for(int j=0;j<=30;j++) v[i][j]=0;
	for(int i=30;i>=0;i--){
		if(x>=cf2[i]) v[0][i]=1,x-=cf2[i];
		if(x==0) break;
	}
	for(int i=30;i>=0;i--){
		if(y>=cf2[i]) v[1][i]=1,y-=cf2[i];
		if(y==0) break;
	}
	for(int i=0;i<=30;i++) if(v[0][i]==1&&v[1][i]==1) sum+=cf2[i];
	return sum;
}
int dfs(int cnt,int u,int num){
	if(cnt==0) return num;
	int maxn=0;
	for(int i=u+1;i<=n;i++){
		int r=afy(num,a[i]);
		maxn=max(maxn,dfs(m-1,i,r));
	}
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=1;i<=30;i++) cf2[i]=cf2[i-1]*2;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int maxn=0;
	for(int i=1;i<=n;i++){
		maxn=max(maxn,dfs(m-1,i,a[i]));
	}
	cout<<maxn;
	return 0;
}
