#include <bits/stdc++.h>
using namespace std;
int a[200005],n,m,ans;
int main(){
	freopen("name.in","r",stdin);
	freopen("name.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	ans=a[m];
	for(int i=m;i>1;i--){
		ans &=a[i];
	}
	cout << ans<<" ";//print gunmu niu bu niu b'_'
	return 0;
}
