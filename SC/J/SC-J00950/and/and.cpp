#include<bits/stdc++.h>
#define int long long
using namespace std;
const int  N = 2e5 + 5;
int a[N]; 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	sort(a+1,a+1+n);
	int mx =0,ans = 0;
	for(int i=1;i<=n;i++){
		ans = a[i];
		for(int j=1;j<m;j++){
			ans &= a[i+j];
		}
		mx = max(ans,mx);
	}
	cout<<mx;
	return 0;
}