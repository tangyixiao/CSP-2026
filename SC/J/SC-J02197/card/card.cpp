#include <iostream>
#include <cmath>
#include <stack>
#include <map>
using namespace std;
#define int long long
const int N = 5e5 + 10;

int nums[N], rec[N];

void solve() {
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; ++ i) {
		cin >> nums[i];
	}
	for(int i = 2; i <= n; ++ i) {
	    map<int, int> mp;
	    stack<int> sta;
		for (int j = i; j <= n; ++ j) {
    	    if(mp[nums[j]] == 0){
		    	mp[nums[j]] = 1; 
		    	sta.push(nums[j]);
		    }else{
	    		while(sta.top() != nums[j]) {
	    			mp[sta.top()] = 0;
	    			sta.pop();
		    	}
	    	}
		}
		while(!sta.empty()){
			rec[sta.top()]++;
			sta.pop();
		}
	}
	for (int i = 1; i <= m; ++ i) {
		cout << rec[i] << ' ';
	}
}
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int T = 1;
	//cin >> T;
	while(T--) {
		solve();
	}
}