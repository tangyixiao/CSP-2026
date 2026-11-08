#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int n, m, ans = pow(2, 31) - 1;
bool a[200005][35];
bool notuse[200005];
int nums[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i){
		cin >> nums[i];
		int num = nums[i];
		for(int j = 1; j <= 30; ++j){
			a[i][j] = num % 2;
			num /= 2;
		}
	}
	for(int wei = 30; wei >= 1; wei--){
		int total = 0;
		for(int i = 1; i <= n; ++i){
			total += a[i][wei] & (!notuse[i]);
		}
		if(total >= m){
			for(int i = 1; i <= n; ++i){
				if(a[i][wei] == 0){
					notuse[i] = true;
				}
			}
		}
	}
	for(int i = 1; i <= n; ++i){
		if(!notuse[i]){
			ans = ans & nums[i];
		}
	}
	cout << ans;
	return 0;
} 
