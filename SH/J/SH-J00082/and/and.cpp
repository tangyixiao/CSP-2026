#include <bits/stdc++.h>
using namespace std;
long long MAXINT;
int a[20005];
int n,m;
long long ans=0;
long long cac;
void dfs(int i,int num){//i是第几个，num是取了几个
	if(num==m){
		ans=max(ans,cac);
		return ;
	}
	if(i==n){
		return ;
	}
	if(num!=0&&cac<ans)return ;
	long long temp=cac;
	cac=(cac&a[i+1]);
	dfs(i+1,num+1);
	cac=temp;
	if(n-i>m-num){
		cac=temp;
		dfs(i+1,num);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=30;i++){
		MAXINT*=2;
	}
	MAXINT-=1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	cac=MAXINT;
	cac=-1;
	ans=0;
	dfs(0,0);
	cout<<ans;
	return 0;
}
