#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10; 
int n,m;
long long a[N];
int b[N];
long long ans=1;
bool f[N];
int c[N];
void dfs(int x,int idx){
	if(idx-1==m){
		long long ma=b[1];
		for(int i=2;i<=m;i++) ma=ma&b[i];
		for(int i=1;i<=n;i++){
			cout<<b[i]<<' ';
		}
		cout<<endl;
		ans=max(ans,ma);
		return;
	}for(int i=x;i<=n;i++){
		if(idx==1||f[i]==false){
			b[idx]=a[i];
			f[i]=true;
			dfs(i,idx+1);
			f[i]=false;
		}
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));	
			}
		}
		cout<<ans;
	}else if(n<=20){
		dfs(1,1);
		cout<<ans;
	}else{
		cout<<0;
	}
	return 0;
} 