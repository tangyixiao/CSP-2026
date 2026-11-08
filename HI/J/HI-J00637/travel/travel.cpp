#include <bits/stdc++.h>
#define ll long long 
using namespace std;
string c1, s1, c2, s2;
int ans[4];
void solve() {
	if (c1 != c2) {
		cout << "0000";
		return ; 
	}
	int id1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int id2 = (s2[0] - '0') * 10 + (s2[1] - '0');

	if (id1 != id2) {
		cout << "1000";
		return ;
	}
	
	int id_s1 = s1[2] - 'A', id_s2 = s2[2] -'A';
	
	if (id_s1 > id_s2) swap(id_s1, id_s2);

	if (id_s1 <= 2 && id_s2 >= 3) {
		cout << "1100";
		return ;
	}

	if (id_s1 <= 2 && id_s2 <= 2) {
		if (id_s1 != id_s2 - 1) {
			cout << "1110";
			return ;
		}
	}
	cout << "1111";
	return ;
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	
	solve();
	
} 
