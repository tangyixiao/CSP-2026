#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
int in,ans=INT_MIN,n,m;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ins[n];
	if(m==1) {
		while(n--){
			cin>>in;
			ans=max(ans,in);
		}
		cout<<ans;
	}
	else if(m==n) {
		while(n--) {
			cin>>in;
			if(m-1==n) ans=in;
			else ans=ans&in;
		}
		cout<<ans;
	}
	else if(m==2){
		for(int i=0;i<n;i++) cin>>ins[i];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(j==i) continue;
				ans=max(i&j,ans);
			}
		}
		cout<<ans;
	}
	else {
		for(int i=0;i<n;i++) cin>>ins[i];
		cout<<ins[n-m];
	}
	return 0;
}