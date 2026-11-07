#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int N=2e5+10;
const int maxx=4000;
int a[N];
int n,m;
vector<vector<int>> dp(maxx);
int num[N];
bool st[N];
ll ans[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=n;i>=1;i--){
		if(!st[a[i]]){
			st[a[i]]=true;
		}
		num[a[i]]++;
	}
	
	
	for(int i=1;i<=n;i++){
		st[a[i]]=false;
	}
	
	for(int i=n;i>=1;i--){
		if(!st[a[i]]){
			dp[a[i]]=dp[a[i+1]];
			dp[a[i]].emplace_back(a[i]);
			st[a[i]]=true;
		}
	}
	
	for(int i=1;i<=n;i++){
		st[a[i]]=false;
	}
	for(int i=1;i<=n;i++){
		if(!st[a[i]]){
			for(int j=0;j<dp[a[i]].size();j++){
				ans[dp[a[i]][j]]+=num[a[i]];
			}
			st[a[i]]=true;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}