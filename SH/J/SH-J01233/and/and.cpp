#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
vector<int> ans;

bool cmp(int a, int b){
	return a > b;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++i){
		int t;
		cin >> t;
		ans.push_back(t);
	}
	
	sort(ans.begin(), ans.end(), cmp);
	
	int mx = ans[m - 1];
	int hbd = 1; // 最高二进制位 
	while(mx){
		hbd <<= 1;
		mx >>= 1;
	}
	
	hbd >>= 1;
//	cout << hbd;

	int nbd = hbd << 1; // 正在处理的二进制位 
	while(nbd > 1){
		int cnt = 0;
		nbd >>= 1;
		for(int i : ans){
			cnt += ((i & nbd) != 0);
		}
		
//		cout << nbd << " " << cnt << "\n";
		
		if(cnt < m){
//			cout << "continue\n\n";
			continue;
		}
		
		if(cnt == m){
			int ans_num = INT_MAX;
			for(int i : ans){
				if(i & nbd){
					ans_num &= i;
				}
			}
			cout << ans_num;
			return 0;
		}
		
//		for(int i : ans){
//			cout << i << " ";
//		}
//		cout << "\n";
		
		for(int i = 0; i < ans.size(); ++i){
//			cout << ans[i] << ": " << (ans[i] & nbd) << "\n";
			if(!(ans[i] & nbd)){
				ans.erase(ans.begin() + i);
				i--;
			}
		}
		
//		for(int i : ans){
//			cout << i << " ";
//		}
//		cout << "\n\n";
	}
	
//	for(int i : ans){
//		cout << i << " ";
//	}
//	cout << "\n\n";
	int ans_num = INT_MAX;
	for(int i : ans){
		ans_num &= i;
//		cout << i << " ";
	}
	
//	cout << "\n";
	
	cout << ans_num;
	
	return 0;
}

