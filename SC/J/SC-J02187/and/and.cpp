#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;

int a[N];

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
    }
    if(m == 1){
    	int mx = -1;
    	for(int i = 1; i <= n; i++){
    		mx = max(mx, a[i]);
		}
		cout << mx;
		return 0;
	}
	if(m == n){
		for(int i = 2; i <= n; i++){
			a[i] &= a[i - 1];
		}
		cout << a[n];
		return 0;
	}
	if(m == 2){
		int mx = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(j == i) continue;
				int x = a[i];
				x &= a[j];
				mx = max(mx, x);
			}
		}
		cout << mx;
		return 0;
	}
	if(m == n - 1){
		int mx = 0;
		for(int i = 1; i <= n; i++){
			int ass = 0;
			int ok = 0;
			if(i == 1){
				ass = a[2];
				ok = 1;
			}else{
				ass = a[1];
			}
			for(int j = 1; j <= n; j++){
				if(j == i) continue;
				if(ok == 1){
					if(j == 2) continue;
				}
				ass &= a[j];
			}
			mx = max(mx, ass);
		}
		cout << mx;
		return 0;
	}
	cout << 1;
	return 0;
}