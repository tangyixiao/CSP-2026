#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 2e5 + 10; 
int n, m;
int a[N]; // <2^30，只要30个位 
bool vis_prev[N];
bool vis_cur[N];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		vis_prev[i] = 1;
	}
//	sort(a + 1, a + 1 + n);
//	reverse(a + 1, a + 1 + n);
	
	
	long long ans = 0;
	for (int j = 30; j >= 0; j--){
		int cnt = 0;
		for (int i = 1; i <= n; i++){
			// 计算当前位为1的数字个数 
			if (vis_prev[i] && (a[i] & (1 << j))){
				cnt++;
				vis_cur[i] = 1;
			}
		}
		// cout << cnt << endl;
		if (cnt < m){
			// 如果不存在m个数该位为1，那么将答案该位置0，所有数字标记清空 
			memset(vis_cur, 0, sizeof(vis_cur));
		} else {
			// 如果存在m个数该位为1，那么将答案该位置1，只选择打过标记的数字 
			ans |= (1 << j);
			for (int i = 1; i <= n; i++){
				vis_prev[i] = vis_cur[i];
				vis_cur[i] = 0;
			}
		}
	}
	
	cout << ans << endl;
	return 0;
} 
