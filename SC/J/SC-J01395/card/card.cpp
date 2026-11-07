#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500005] , k[300005] , pl[300005];
signed main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n , m;cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		k[a[i]] = i;
	}
	//for(int i = 1;i <= m;i++) cout << k[i] << " ";
	for(int i = 1;i <= n;i++){
		int p = k[a[i]] + 1;
		pl[a[i]]++;
		while(p < n){
			pl[a[p]]++;
			p = k[a[p]] + 1;
		}
		pl[a[p]]++;
	}
	for(int i = 1;i <= m;i++) cout << pl[i] << " ";
	cout << "\n";
}