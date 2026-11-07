#include <iostream>
#include <cmath>
using namespace std;

int a_num, a_idx, b_num, b_idx;
int ans[4];
char a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a_idx >> a_num >> a >> b_idx >> b_num >> b;
	if(a_idx == b_idx) {
		ans[0] = 1;
		if(a_num == b_num) {
			ans[1] = 1;
			if(!((a <= 'C') xor (b <= 'C'))) {
				ans[2] = 1;
				if(abs(a-b) == 1)
					ans[3] = 1;
			}
		}
	}
	for(int i=0;i<4;i++)
		cout << ans[i];
} 
