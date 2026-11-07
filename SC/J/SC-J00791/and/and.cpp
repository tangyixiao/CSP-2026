#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MX=2e5;
int a[MX],m,n,ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i+m-1<n;++i){
		int t=a[i];
		for(int j=i+1;j<i+m-1;++j){
			t&=a[j];
		}
		ans=max(t,ans);
	}
	cout<<ans;
	return 0;
}