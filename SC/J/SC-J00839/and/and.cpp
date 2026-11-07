#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int arr[N];
int a,b;
bool vis[N];
int ans = 0;
void dfs(int now,int ci,int ans1){
	if(ci==0){
		ans = max(ans,ans1);
		return ;
	}
	vis[now] = 1;
	for(int i=1;i<=a;i++){
		if(!vis[i]){
			int k = ans1 & arr[i];
			dfs(i,ci-1,k);
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++) cin>>arr[i];
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++) vis[j] = 0;
		dfs(i,b-1,arr[i]);

	}
	cout<<ans;
	
	return 0;
} 