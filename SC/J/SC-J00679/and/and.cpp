#include<bits/stdc++.h>
using namespace std;
int b[200005];
string s[200005];
long long a[200005],mx;
int n,m;
long long an(long long x,long long y){
	long long ans=0;
	for(int i=0;x>0&&y>0;i++){
		if(x%2==y%2&&x%2==1) ans+=pow(2,i);
		x/=2,y/=2; 
	}
	return ans;
}
void dfs(int x,int p,long long z){
	if(p==m) {
		mx=max(mx,z);
		return ;
	}
	if(x>n) return ;
	if(p==0){
		dfs(x+1,0,z);
		dfs(x+1,1,a[x]);
	} 
	else{
		dfs(x+1,p,z);
		dfs(x+1,p+1,an(a[x],z));
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	} 
	mx=-1;
	dfs(1,0,0);
	cout<<mx;
	return 0;
} 