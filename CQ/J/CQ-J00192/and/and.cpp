#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10,K=60;
int n,f[K],m;
struct node{
	int i,di;
}a[N];
bool cmp(node a, node b){
	return a.di > b.di;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i=1;i<=n;++i){
		cin >> a[i].i;
	}
	for (int k=1;k<=n;++k){
		for (int i=1,j=1;j<30;i*=2,j++){
			//cout << i << ' ' << j << '\n';
			if (a[k].i & i) f[j]++;
		}
	}
	int mst = 0;
	for (int i=30;i>=1;--i){
		if (f[i] >= m){
			mst = i;break;
		}
	}
	if (mst == 0) {
		cout << 0;
		return 0;
	}
	else{
		int mk=0;
		for (int i=1;i<=mst;++i){
			mk <<= 1;
			mk++;
		}
	//	cout << mk << ' ' << mst << endl;
		for (int i=1;i<=n;++i){
			a[i].di = a[i].i & mk;
		}
		sort(a+1,a+1+n,cmp);
		int ans = a[1].i;
		for (int i=2;i<=m;++i){
			ans &= a[i].i;
		}
		cout << ans;
	}
	return 0;
}
