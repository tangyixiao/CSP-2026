#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=31;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if((a[j]&(ans|(1ll<<i)))==(ans|(1ll<<i))) cnt++;
		}
		if(cnt>=m) ans|=(1ll<<i);
	}
	cout<<ans<<'\n';
	return !"I'm xcb";
}
/*
Noooooooooooooooooooooooooooooooooo

too difficult!!!



Trick||Treat!
Trick||Treat!
Trick||Treat!
Trick||Treat!
Trick||Treat!
*/