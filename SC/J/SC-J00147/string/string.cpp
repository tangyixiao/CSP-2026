#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200010],l,r,val,ans;
char c[200010];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	l=1;
	r=n;
	while(r>l){
		val=min(a[l],a[r]);
		if(c[l]!=c[r]){
			ans+=val;
		}
		a[l]-=val;
		a[r]-=val;
		if(a[l]==0){
			l++;
		}
		if(a[r]==0){
			r--;
		}
	}
	cout<<ans;
	return 0;
}