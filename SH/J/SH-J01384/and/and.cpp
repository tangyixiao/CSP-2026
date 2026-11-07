#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans;
ll n,m;
ll a[200005];
int use[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i = 30;i >= 0;i--){
		int k = 0,cnt = 0;
		for(int j = 1;j <= n;j++){
			if(1 << i & a[j])
				k++;
		}
		if(k >= m){
			ans += (1<<i);
			for(int j = 1;j <= n;j++){
				if((1 << i) & a[j])
					use[++cnt] = a[j];
			}
			for(int j = 1;j <= k;j++){
				a[j] = use[j];
			}
			n = k;
		}
	}
	cout << ans;
	return 0;
}
