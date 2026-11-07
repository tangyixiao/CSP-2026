#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int n,m,ans=0;
int l[200005]={0};
void dfs(int id,int sum,int s){
	if(s==m){
		ans=max(ans,sum);
		return ;
	}
	if(id>n) return ;
	dfs(id+1,sum,s);
	if(sum==0) sum=l[id];
	dfs(id+1,(sum&l[id]),s+1);
}
int read(){
	char a;
	a=getchar();
	while(a<'0'||a>'9') a=getchar();
	int ret=0;
	while(a>='0'&&a<='9'){
		ret=ret*10+a-'0';
		a=getchar();
	}
	return ret;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ma=-1;
	for(int i=1;i<=n;i++){
		l[i]=read();
		ma=max(l[i],ma);
	}
	sort(l+1,l+1+n);
	int be=1;
	while(l[be]==0) be++;
	if(n-be+1<m){
		cout<<0;
		return 0;
	}
	dfs(be,0,0);
	cout<<ans;
	return 0;
}