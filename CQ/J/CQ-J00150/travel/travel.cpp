#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int c1, c2, r1, r2;
	char x1, x2;
	cin >>c1 >>r1 >>x1 >>c2 >>r2 >>x2;
	string ans = "0000";
	if(c1 == c2){
		ans[0] = '1';
		if(r1 == r2){
			ans[1] = '1';
			if(x1 <= 'C' && x2 <= 'C'){
				ans[2] = '1';
				ans[3] = abs(x1 - x2) == 1 ? '1' : '0';
			}else if(x1 >= 'D' && x2 >= 'D')
				ans[2] = ans[3] = '1';
		}
	}
	cout <<ans <<endl;
	return 0;
}
