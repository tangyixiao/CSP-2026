#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int a[MAXN],v[MAXN];
int max1=-1,n,m;
void dfs(int x,int k,int ans){
	if(k==m){
		max1=max(max1,ans);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!v[i]){
			ans&=a[i];
			dfs(a[i],k+1,ans);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(n<=20){
		for(int i=1;i<=n;i++){
			v[i]=1;
			dfs(a[i],1,a[i]);
		}
		cout<<max1;
	}else{
		sort(a+1,a+1+n);
		int ans=a[n];
		for(int i=n-1;i>=n-m+1;i--){
			ans&=a[i];
		}
		cout<<ans;
	}
	return 0;
} 