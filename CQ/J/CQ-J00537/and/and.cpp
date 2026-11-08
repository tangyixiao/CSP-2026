#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],v[200005],ans,x=pow(2,31)-1;
void dfs(int k,int sum){
	if(k>m){
		if(ans<sum)ans=sum;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!v[i]){
			v[i]=1;
			dfs(k+1,sum&a[i]);
			v[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x=x&a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==n){
		cout<<x;
		return 0;
	}
	dfs(1,pow(2,31)-1);
	cout<<ans;
	return 0;
} 
