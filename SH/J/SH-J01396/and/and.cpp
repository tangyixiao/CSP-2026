#include <bits/stdc++.h>
#define int long long
using namespace std;
int m,n,dp[200020],ans=0;
int a[200020];
bool cmp(int n1,int n2){
	return n1>n2;
}
int tot(int x){
	int num;
	while(x){
		num++;
		x/=2;
	}
	return num;
}
signed main(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
