#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

long long arr[int(2e5 + 10)];

int n, m, ans = 0, hb = 1 << 30;

void dfs(){
	if(hb == 0) return;
	int cnt = 0;
	for(int i = 0;arr[i] != 0x7f7f7f7f;i++){
		if(arr[i] & hb){
			cnt++;
		}
	}
	if(cnt >= m){
		ans += hb;
		queue<long long> q;
		for(int i = 0;arr[i] != 0x7f7f7f7f;i++){
			if((arr[i] & hb) != 0){
				q.push(arr[i] ^ hb);
			}
		}
		int i = 0;
		while(!q.empty()){
			arr[i] = q.front();
			arr[i + 1] = 0x7f7f7f7f;
			q.pop();
			++i;
		}
	}
	hb >>= 1;
	dfs();
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr, arr + n);
	reverse(arr, arr + n);
	arr[n] = 0x7f7f7f7f;
	if(arr[0] == 0){
		cout << 0 << endl;
		return 0;
	}
	dfs();
	cout << ans << endl;
	return 0;
} 
