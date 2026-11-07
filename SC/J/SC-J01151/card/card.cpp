#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=3e5+10;
int n,m,a[N],cnt[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int mx=a[i];
		for(int j=i+1;j<=n;j++) if(a[j]==a[j-1]) mx=max(mx,a[j]);
		cnt[mx]++;
	}
	for(int i=1;i<=m;i++) cnt[i]+=cnt[i-1],cout<<cnt[i]<<" ";
	return 0;
}