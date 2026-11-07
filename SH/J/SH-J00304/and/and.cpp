#include <iostream>
#include <algorithm>

using namespace std;

int a[200005], n, m, two[25], ans;
bool solveb = 1;
int b[200005][25], c[25];

int solve0(int layer, int choose, int sum){
	if(layer == n + 1){
		if(choose == m){
			ans = max(ans, sum);
		}
		return ans;
	}
	if(n - layer < m - choose){
		return ans;
	}
	ans = max(solve0(layer + 1, choose, sum), solve0(layer + 1, choose + 1, (sum & a[layer + 1])));
}
//溜了溜了 去做T2了  太难了QaQ 
int solve1(){
	if(m == 1){
		for(int i = 1;i <= n;i++){
			ans = max(ans, a[i]);
		}
	}else if(m == n){
		ans = a[1];
		for(int i = 2;i <= n;i++){
			ans = (ans & a[i]);
		}
	}else{
		for(int i = 1;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				ans = max(ans, (a[i] & a[j]));
			}
		}
	}
	return ans;
}
int solve2(){
	for(int i = 0;i <= 20;i++){
		c[i] = n;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 20;j >= 0;j--){
			if(a[i] > two[j]){
				b[i][j]++;
				a[i] -= two[j];
				c[j] -= 1;
			}
		}
	}
	int anss = 0;
	for(int i = 1;i <= n;i++){
		for(int j = 0;j <= 20;j++){
			if((c[j] == 1 && b[i][j] == 0) || c[j] == 0){
				anss += (1 << j);
			}
		}
		ans = max(ans, anss);
	}
	return ans;
}
int solve3(){
	sort(a + 1, a + n + 1);
	int ans = a[n];
	for(int i = n - 1;i > n - m;i--){
		ans &= a[i];
	}
	return ans;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	two[0] = 1;
	for(int i = 1;i <= 20;i++){
		two[i] = 2 * two[i - 1];
	}
	
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(n <= 20){
		cout << solve0(0, 0, (1 << 20) - 1);
		return 0;
	}
	if(n <= 2000){
		cout << solve1();
		return 0;
	}
	if(m == n - 1){
		cout << solve2();
		return 0;
	}
	cout << solve3();
	return 0;
}
