#include <iostream>
#define ll long long
using namespace std;

ll n, m, ans;
ll arr[200005];
bool flag[200005];

void dfs(ll last, ll num, ll idx) {
	//cout << idx << endl;
	//for(int x=0;x<m-idx;x++) cout << " ";
	//cout << arr[last] << endl;
	if(idx <= 1) {
		if(num > ans) ans = num;
		//cout << '#' << num << endl;
	} else {
		for(int i=last+1;i<n-m+idx+1;i++) {
			if(flag[i] == false) {
				flag[i] = true;
				dfs(i, num&arr[i], idx-1);
				flag[i] = false;
			}
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> arr[i];
	for(int i=0;i<n-m+1;i++) {
		flag[i] = true;
		dfs(i, arr[i], m);
		flag[i] = false;
	}
	cout << ans;
}
