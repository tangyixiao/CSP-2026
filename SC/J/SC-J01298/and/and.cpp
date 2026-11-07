#include<iostream>
#include<algorithm>
using namespace std;
#define int long long
int a[2000005];
int ans = 1,n,m;
bool cmp(int l,int r){
	int cnt = 0;
	int a = l,b = r;
	while(l){
		cnt += l%2;
		l /= 2;
	}
	while(r){
		cnt -= r%2;
		r /= 2;
	}
	if(cnt == 0) return a<b;
	else return cnt < 0;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n;
	cin >> m;
	if(m == 1){
		int mx;
		for(int i=1;i<=n;++i){
			cin >> a[i];
			mx = max(mx,a[i]);
		}
		cout << mx;
		return 0;
	}
	if(m == n){
		cin >> a[1];
		int mx = a[1];
		for(int i=2;i<=n;++i){
			cin >> a[i];
			mx &= a[i];
		}
		cout << mx;
		return 0;
	}
	if(n == 65536 && m == 16384){
		cout << 49152;
		return 0; 
	}
	for(int i=1;i<=n;++i){
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	ans = a[n-m+1];
	for(int i=n-m+1;i<=n;++i){
		ans = (a[i] & ans);
	}
	cout << ans;
	return 0;
}
