#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
const int N=2e5+5;
int a[N];
int ans;
bool mark[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=30;i>=0;i--){
		ans+=(1<<i);
		int cnt=0;
		for(int i=1;i<=n;i++){
			if((ans&a[i])==ans)cnt++;
		} 
		if(cnt<m)ans-=(1<<i);
	}
	cout<<ans<<'\n';
	return 0;
} 
