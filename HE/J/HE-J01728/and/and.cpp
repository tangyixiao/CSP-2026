#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+7;
int n,m,ans=-1e9;
int a[maxn];
int read(){
	long long f=1,s=0;
	char c=getchar();
	if(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		s=s*10+c-'0';
		c=getchar();
	}
	return f*s;
}
void dfs(int p,int cnt,int num,int cur){
	if(p>n) return;
	if(cnt==m){
		ans=max(ans,num);
		return;
	}
	dfs(p+1,cnt,num,cur);
	dfs(p+1,cnt+1,num&=a[p],cur);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	for(int i=1;i<=n;i++) dfs(i+1,1,a[i],i);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
