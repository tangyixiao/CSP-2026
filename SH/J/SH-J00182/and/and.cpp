#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+9;
ll n,m,a[N],ans;
ll dfs(int i,int k,ll cnt){
	if((i>n&&k<m)||(n-i+1<m-k&&n>i)) return 0;
	if(i==n&&k==m-1)return cnt&a[i];
	if(k==m) return cnt;
	if(k==0&&cnt==0) 
	return max(dfs(i+1,k,cnt),dfs(i+1,k+1,a[i])); 
	else if(k!=0&&cnt==0) return 0;
	else return max(dfs(i+1,k,cnt),dfs(i+1,k+1,cnt&a[i])); 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<dfs(1,0,0);
	return 0;
}
