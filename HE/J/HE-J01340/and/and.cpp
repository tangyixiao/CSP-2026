#include <bits/stdc++.h>
using namespace std;

int nums[200005];
int m;

int check_max(int begin, int end, int cnt){
	if(cnt <= 1) return nums[begin];
	int mx = -1;
	for(int i = begin; i < end - 1; i++){
		int tmp = nums[begin] & check_max(begin + 1, end, cnt - 1);
		if(tmp > mx){
			mx = tmp;
		}
	}
	
	return mx;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n >> m;
	cout << n << " " << m << "\n";
	
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	
	int mx = -1;
	
	for(int i = 0; i < n - 1; i++){
		mx = max(mx, check_max(i, n, m));
	}
	
	cout << mx << "\n";
	return 0;
}
