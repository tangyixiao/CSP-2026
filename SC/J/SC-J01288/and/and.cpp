#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[200010];
int ans_s = INT_MIN;

void sreach(int pos, int and_v, int used){
	if(used == m){
		ans_s = max(ans_s, and_v);
		return;
	}
	for(int i = pos+1; i < n; ++i)
		sreach(i, and_v&a[i], used+1);
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	if(m == 1){
		int ma = a[0];
		for(int i = 1; i < n; ++i)
			ma = max(ma, a[i]);
		cout << ma;
	}
	else if(m == 2){
		int ma = INT_MIN, tmp;
		for(int i = 0; i < n-1; ++i)
			for(int j = i+1; j < n; ++j){
				tmp = a[i]&a[j];
				ma = max(tmp, ma);
			}
		cout << ma;
	}
	else if(m == n){
		int ans = a[0];
		for(int i = 1; i < n; ++i)
			ans = ans&a[i];
		cout << ans;
	}
	else if(m == n-1){
		int ans = INT_MIN;
		for(int i = 0; i < n; ++i){
			int tmp = INT_MAX;
			for(int j = 0; j < n; ++j)
				if(j != i)
					tmp = tmp&a[j];
			ans = max(ans, tmp);
		}
		cout << ans;
	}
	else{
		sreach(0, a[0], 1);
		cout << ans_s;
	}
	return 0;
}
