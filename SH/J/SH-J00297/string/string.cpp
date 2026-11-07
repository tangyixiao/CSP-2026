#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,pos,ans;
int a[N];
char c[N];
signed main( ){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	pos=n;
	int left=a[1];
	for(int i=1;i<=n;i++){
		if(pos<=i) break;
		while(left>a[pos]){
			if(c[i]!=c[pos]) ans+=a[pos];
			left-=a[pos];
			pos--;
			if(pos<=i) break;
		}
		if(c[i]!=c[pos]) ans+=left;
		a[pos]-=left;
		left=a[i+1];
		if(pos<=i) break;
	}
	cout<<ans;
	return 0;
}
