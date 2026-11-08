#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+1;
void fast(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	return;
}
ll n,m,b[N],a[N],f[N],ans=-1,c[N];
void dfs(ll p){
	if(p==m+1){
		return;
	}
	for(int i=1;i<=n;i++){
		c[i]=b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!f[j]){
				b[i]=c[i]&a[j];
				f[j]=1;
				dfs(p+1);
				f[j]=0;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	fast();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}else if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}else{
		dfs(1);
		for(int i=1;i<=n;i++) ans=max(ans,b[i]);
		cout<<ans;
	}
	return 0;
}

