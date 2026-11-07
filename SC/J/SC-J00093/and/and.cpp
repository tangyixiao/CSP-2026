#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N=2e5+10;
int n,m;
int a[N];
int dp[N];
int cnt;
bool cmp(int x,int y){
	return x>y;
}
void t(){
	int ma=0;
	for(int i=1;i<=n;i++) ma=max(ma,a[i]);
	cout<<ma;
	return;
}

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++) cin>>a[i];
		t();
		return 0;
	}
	for(int i=1;i<=n;i++){
		bool f=1;
		cin>>a[i];
		for(int j=1;j<=cnt;j++){
			if(dp[j]==a[i]){
				f=0;
				break;
			} 
		}
		if(f) dp[++cnt]=a[i];
	}
	sort(dp+1,dp+1+cnt,cmp);
	if(cnt<m) cout<<dp[cnt];
	else cout<<dp[m];
	return 0;
}