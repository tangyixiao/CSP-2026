#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,cnt,a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		if(i == 1) cnt = a[i];
		else cnt = (cnt&a[i]);
	}
	sort(a+1,a+n+1);
	if(m == 1){
		cout<<a[n];
		return 0;
	}
	if(m == n){
		cout<<cnt;
		return 0;
	}
	if(m == 2){
		int ans = 0;
		for(int i = 1;i <= n;i++){
			for(int j = i+1;j <= n;j++){
				ans = max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
		return 0;
	}
	int ans;
	ans = a[n];
	for(int i = n-1;i >= n-m;i--){
		ans = (ans&a[i]);
	}
	cout<<ans;
	return 0; 
}