#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,s[200005],p[200005];
bool SubA=1;
void dfs(int u,int cnt,int res){
	if(cnt==m) ans=res;
	if(u>n||m-cnt>n-u+1) return;
	if(m-cnt==n-u+1){
		for(int i=u;i<=n;i++){
			res&=a[i];
			if(res<=ans) return;
		}
		ans=res;
	}
	for(int i=u;i<=n;i++) if((res&a[i])>ans) dfs(i+1,cnt+1,res&a[i]);
}
int main(){
	freopen("and.in","r",stdin),freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0),cin>>n>>m;
	s[0]=p[n+1]=INT_MAX;
	for(int i=1;i<=n;i++){
		cin>>a[i],s[i]=(s[i-1]&a[i]);
		long long j=1;
		while(j<a[i]) j=((j+1)<<1)-1;
		SubA=SubA&&(j==a[i]?1:0);
	}
	for(int i=n;i>0;i--) p[i]=p[i+1]&a[i];
	if(m==1) sort(a+1,a+n+1),cout<<a[n];
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
	}else if(m==2){
		for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++)
			ans=max(a[i]&a[j],ans);
		cout<<ans;
	}else if(m==n-1){
		for(int i=1;i<=n;i++) ans=max(s[i-1]&p[i+1],ans);
		cout<<ans;
	}else if(SubA){
		sort(a+1,a+n+1,greater<int>()),ans=INT_MAX;
		for(int i=1;i<=m;i++) ans&=a[i];
		cout<<ans;
	}else if(n*m<=2e9) dfs(1,0,INT_MAX),cout<<ans;
	else cout<<"Sorry,I can`t solve it.Please give me some AC!";
	return 0;
}
