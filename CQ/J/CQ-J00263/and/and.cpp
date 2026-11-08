#include<bits/stdc++.h>
using namespace std;
long long n, m, s[200005], ans, v[200005];
void dfs(int l,long long h){
	if(l==m)ans=max(ans,h);
	else{
		for(int i=1;i<=n;i++){
		    if(!v[i]){
				v[i]=1;
				long long k=h;
				h&=s[i];
				dfs(l+1,h);
				h=k;
				v[i]=0;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>s[i];
	if(m==1){
		for(int i=1;i<=n;i++)ans=max(s[i],ans);
		cout<<ans;
		return 0;
	}
	else if(m==n){
		ans=s[1];
		for(int i=1;i<=n;i++)ans&=s[i];
		cout<<ans;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<n;i++)for(int j=i+1;j<=n;j++)ans=max(ans,s[i]&s[j]);
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++)dfs(1,s[i]);
	cout<<ans;
	return 0;
}
