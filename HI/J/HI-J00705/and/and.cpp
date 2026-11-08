#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+100;
long long a[N];

bool cmp(long aa,long bb){
	if(aa>bb) return 1;
	return 0;
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m; cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int ans=a[1];
	for(int i=2;i<=m;i++){
		ans=(ans&a[i]);
	}
	cout<<ans;
	
	return 0;
}
