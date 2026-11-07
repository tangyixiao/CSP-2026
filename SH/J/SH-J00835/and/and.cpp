#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],cnt,er[25],maxn,vis[N];
long long an(long long x,long long y){
	if(x==y){
		return x;
	}
	if(x<y){
		swap(x,y);
	}
	int tx=x;
	int k=1;
	while(tx){
		er[k]=tx%2;
		tx/=2;
		k++;
	}
	tx=y;
	int sum=0;
	k=1;
	while(tx){
		if(tx%2==1&&er[k]==1){
			er[k]=1;
		}else{
			er[k]=0;
		}
		int p=pow(2,k-1);
		sum+=p*er[k];
		tx/=2;
		k++;
	}
	return sum;
}
void dfs(int st,long long ans,int x){
	vis[x]=1;
	if(st==m){
		maxn=max(maxn,ans);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==1)continue;
		vis[i]=1;
		
		dfs(st+1,an(ans,a[i]),i);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dfs(1,a[i],i);
	}
	cout<<maxn;
	return 0;
}
