#include <bits/stdc++.h>
using namespace std;
struct abab {
	int _long;
	char _char;
} m[200010],r[100005],l[100005];
long long n,max_long;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> m[i]._long >> m[i]._char;
		max_long += m[i]._long;
	}
	if(max_long % 2 == 1) {
		max_long = max_long / 2 + 1;
	} else {
		max_long = max_long / 2;
	}
	int now_long = 0;
	int a_long = 0;
	int b_long = 0;
	//cout << "[test]left:";
	for(int i = 1; i <= n; i++) {
		if(max_long - now_long > m[i]._long) {
			now_long += m[i]._long;
			a_long ++;
			l[a_long]._long = m[i]._long;
			l[a_long]._char = m[i]._char;
			//cout << l[a_long]._long << l[a_long]._char;
		} else {
			a_long ++;
			l[a_long]._long = max_long - now_long;
			l[a_long]._char = m[i]._char;
			//cout << l[a_long]._long << l[a_long]._char;
			break;
		}
	}
	//cout << endl << "[test]right:";
	now_long = 0;
	for(int i = n; i >= 1; i--) {
		if(max_long - now_long > m[i]._long) {
			now_long += m[i]._long;
			b_long ++;
			r[b_long]._long = m[i]._long;
			r[b_long]._char = m[i]._char;
			//cout << r[b_long]._long << r[b_long]._char;
		} else {
			b_long ++;
			r[b_long]._long = max_long - now_long;
			r[b_long]._char = m[i]._char;
			//cout << r[b_long]._long << r[b_long]._char;
			break;
		}
	}
	//cout << endl;
	int a_now = 1;
	int b_now = 1;
	int a_now_long = 0;
	int b_now_long = 0;
	long long ans = 0;
	//cout << "[start]." << endl;
	while(a_now <= a_long && b_now <= b_long) {
		//cout << "[compare]a_now_long:" << a_now_long << endl;
		//cout << "[compare]a_now:" << a_now << endl;
		//cout << "[compare]b_now_long:" << b_now_long << endl;
		//cout << "[compare]b_now:" << b_now << endl;
		if(l[a_now]._char != r[b_now]._char) {
			if(l[a_now]._long + a_now_long > r[b_now]._long + b_now_long){
				ans += r[b_now]._long + b_now_long - a_now_long;
				//cout << "[ans]更新为:" << ans << endl;
				b_now_long += r[b_now]._long;
				b_now++;
			} else if(l[a_now]._long + a_now_long < r[b_now]._long + b_now_long){
				ans += l[a_now]._long + a_now_long - b_now_long;
				//cout << "[ans]更新为:" << ans << endl;
				a_now_long += l[a_now]._long;
				a_now++;
			}else{
				ans += l[a_now]._long + a_now_long - b_now_long;
				//cout << "[ans]更新为:" << ans << endl;
				a_now_long += l[a_now]._long;
				a_now++;
				b_now_long += r[b_now]._long;
				b_now++;
			} 
		} else {
			//cout << "[ans]:未更新" << endl;
			if(l[a_now]._long + a_now_long > r[b_now]._long + b_now_long) {
				b_now_long += r[b_now]._long;
				b_now++;
			} else {
				a_now_long += l[a_now]._long;
				a_now++;
			}
		}
	}
	cout << ans;
	return 0;
}

