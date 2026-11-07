#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,k1,ans,a[N];
bool check(int x){
	int cnt=0;
	for(int i=1;i<=n;i++)
		if((a[i]|x)==a[i]) cnt++;
	return cnt>=m;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=35;k>=0;k--){
		int v=(1ll<<k)|ans;
		if(check(v)) ans|=(1ll<<k);
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/