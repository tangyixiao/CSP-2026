#include <bits/stdc++.h>

using namespace std;
constexpr int MaxN = 2e5+5;
unsigned int n, m, arr[MaxN], num[32], arr2[MaxN];

int main() {
	ios::sync_with_stdio(false);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (unsigned int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, greater<unsigned int>());
	for (unsigned int i = 0; i < n; i++) {
		for ( int j = 31; j >= 0; --j) {
			num[j] += ((arr[i] & (1 << j)) >> j);
		}
	}
	for (int j = 30; j >= 0; --j) {
		if (num[j] < m) continue;
		int cnt=0;
		for (unsigned int i = 0; i < n; i++) {
			if((arr[i] & (1 << j)) >> j){
				arr2[cnt]=arr[i]&((1<<(j+1))-1);
				cnt++;
			}
		}
		sort(arr2, arr2+cnt, greater<unsigned int>());
		auto ans = arr2[0];
		for(unsigned int k = 1; k<m; k++){
			ans = ans&arr2[k];
		}
		cout<<ans<<endl;
		return 0;
		
	}


	return 0;
}