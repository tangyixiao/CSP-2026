#include<bits/stdc++.h>
using namespace std;
const int N=2e3+5;
typedef long long int ll;
ll n,a[N],m,dp[N],ans,c;
bool f[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	ans=INT_MIN;
	for(int i=1;i<=n;i++){
		ans=max(a[i],ans);
	}
	cout<<ans;
	return 0;
}
/*
5 3
31 3 1 15 7
*/