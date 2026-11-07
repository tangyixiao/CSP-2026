//T2
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;

int l,r,n,a[N],ans;
char c[N];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	l=1;
	r=n;
	while(l<r){
		int cnt=min(a[l],a[r]);
		if(c[l]!=c[r]){
			ans+=cnt;
		}
		a[l]-=cnt;
		a[r]-=cnt;
		if(!a[l]) l++;
		if(!a[r]) r--;
	}
	cout<<ans;
	
	return 0;
}