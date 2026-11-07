#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
typedef long long ll;
const int mx=2e5+10;
int n,m,a[mx],cnt;
ll ans,max1=-1;
void dfs(int k,int u){
	if(ans<=max1)return;
	if(cnt==m){
		max1=max(ans,max1);
		return;
	}
	for(int i=k;i<=n;i++){
		if(cnt==0){
			ans=a[k];
			cnt++;
			continue;
		}
		ans=(ans&a[i]);
		cnt++;
		dfs(i+1,ans);
		ans=u;
		cnt--;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		ans=a[i],cnt=0;
		dfs(i,a[i]);
	}
	cout<<max1;
	return 0;
} 