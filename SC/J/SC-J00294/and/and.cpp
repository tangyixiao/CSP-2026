#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans;
int poww(int a,int x){
	int mul=a,ans=1;
	while(x){
		if(x&1){
			ans*=mul;
		}
		mul*=mul;
		x>>=1;
	}
	return ans;
}
bool pow_and(int a,int b){
	while(a&&b){
		if((a%2==1)&&(b%2==1)){
			return 1;
		}
		a/=2;
		b/=2;
	}
	return 0;
}
int a[200005];
bool vis[200005],wei[41];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=30;i>=0;i--){
		int po=poww(2,i);
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(vis[j]==0&&pow_and(a[j],po))cnt++;
		}
		if(cnt<m)continue;
		for(int j=1;j<=n;j++){
			if(pow_and(a[j],po)==0){
				vis[j]=1;
			}
		}
		ans+=po;
	}
	cout<<ans;
	return 0;
}