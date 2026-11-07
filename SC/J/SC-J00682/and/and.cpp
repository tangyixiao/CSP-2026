#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[101010],ans;
ll f;
void dfs(int k,int n,int m){
	ll aa;
	if(m==0){
		ans=max(ans,aa);
	}
	for(int i=1;i<=n;i++){
		aa&=a[i];
		dfs(i,n,m-1);
		
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	 cin>>n>>m;
	 for(int i=1;i<=n;i++){
	 	cin>>a[i];
	 	f=1;
		if(log2(a[i]+1)!=int(log2(a[i]+1))){
			f=0;
		}
	 }
	 if(n==m){
	 	ans=a[1];
	 	for(int i=1;i<=n;i++){
	 		ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
	 	ans=a[1];
	 	for(int i=1;i<=n;i++){
	 		ans=max(a[i],ans);
		}
		
		cout<<ans;
		return 0;
	}
	if(m==2){
	 	for(int i=1;i<=n;i++){
	 		for(int j=i+1;j<=n;j++){
	 		ans=max(ans,a[i]&a[j]);
	 			

			}
		}
		cout<<ans;
		return 0;
	}
	if(f){
		sort(a+1,a+n+1);
		for(int i=n;i>=1;i--){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	else{
		dfs(1,n,m);
		cout<<ans;
		return 0;
	}
	cout<<0; 
	return 0;
	
}