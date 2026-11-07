#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans,nt[50],res[N],k;
void dfs(int t){
	if(t==0){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(res[i]){
				if(cnt==0) ans=a[i],cnt++;
				else{
					cnt++;ans&=a[i];
				}
			}
			if(cnt==m)break;
		}
		return;
	}
	int cnt=0;
	for(int j=1;j<=n;j++){
		if(res[j]&&(a[j]&(1<<(t-1)))){
			cnt++;
		}
	}
	if(cnt>=m){
		for(int j=1;j<=n;j++){
			if((a[j]&(1<<(t-1)))==0){
				res[j]=0;
			}
		}
	}
	dfs(t-1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=30;j++){
		for(int i=1;i<=n;i++){
			if(a[i]&(1<<(j-1))){
				nt[j]++;
			}
		}
	}
	for(int i=30;i>=1;i--){
		if(nt[i]>=m){
			for(int j=1;j<=n;j++){
				if(a[j]&(1<<(i-1))){
					res[j]=1;
				}
			}
			k=i;
			break;
		}
	}
	dfs(k-1);
	cout<<ans;
	return 0;
}