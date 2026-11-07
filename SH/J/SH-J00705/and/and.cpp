#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
int n , m;
long long a[200005] , ans;
string ch[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i ++){
		cin >> a[i];
		ch[i] = change(a[i]);
	}
	if(m == 1){
		ll maxa = 0;
		for(int i = 1 ; i <= n ; i ++){
			maxa = max(maxa , a[i]);
		}
		cout << maxa;
	}
	else if(m == n){
		ans = a[1];
		for(int i = 2 ; i <= n ; i ++){
			ans = (ans&a[i]); 
		}
		cout << ans;
	}
	else if(m == 2){
		int di = 1;
		ll maxa = 0;
		for(int i = 1 ; i <= n ; i ++){
			if(maxa < a[i]){
				maxa = max(maxa , a[i]);
				di = i;
			}
		}
		ll maxans = 0;
		for(int i = 1 ; i <= n ; i ++){
			if(a[i] == maxa&&i == di)continue;
			maxans = max(maxans , (maxa & a[i])); 
		}
		cout << maxans;
	}
	return 0;
} 
