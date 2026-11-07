#include <bits/stdc++.h>
using namespace std;
string sub(string s, int l, int r){
	string res = "";
	for (int i = l;i <= r;i ++) res += s[i];
	return res;
}
int gsd(char c){
	if (c == 'A' || c == 'B' || c == 'C') return 1;
	else return 2;
}
void solve(){
	string c1, s1, c2, s2;
	/*
	c1 小R的车厢号
	s1 小R的座位号 
	
	c2 小X的车厢号
	s2 小X的座位号 
	*/
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) return cout << "0000\n", void();
	if (sub(s1, 0, 1) != sub(s2, 0, 1)) return cout << "1000\n", void();
	if (gsd(s1[2]) != gsd(s2[2])) return cout << "1100\n", void();
	if (abs(s1[2] - s2[2]) != 1) return cout << "1110\n", void();
	return cout << "1111\n", void();
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	solve();
	return 0;
}