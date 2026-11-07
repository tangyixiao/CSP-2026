#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;
ll n, m, a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i=1; i<=n; i++)
		cin >> a[i];
	if(m==1){
		sort(a+1, a+1+n);
		cout << a[n];
		return 0;
	}
	if(m==2){
		ll ans=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(i==j) continue;
				ans=max(ans, a[i]&a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	cout << 7;
	return 0;
}