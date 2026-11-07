#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans;
int a[200005];
int tot[200005];
int pw2[32]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648};
int count_one(int x){
	int cnt=0;
	while(x){
		if(x&1) cnt++;
		x>>=1;
	}
	return cnt;
}
bool check(){
	for(int i=1;i<=n;i++)
		if(a[i]!=pw2[tot[i]]-1)
			return false;
	return true;
}
void dfs(int step,int pre,int tans){
	if(step>m){
		ans=max(ans,tans);
		return ;
	}
	for(int i=pre+1;i<=n;i++){
		dfs(step+1,i,tans&a[i]);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		tot[i]=count_one(a[i]);
	}
	if(check()){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(2,i,a[i]);
	}
	cout<<ans;
	return 0;
}