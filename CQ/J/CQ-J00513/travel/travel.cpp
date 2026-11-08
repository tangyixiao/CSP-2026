/*
先概括题面：
给你两个人的车厢号和座位号，判断：
是否在同一节车厢：直接判断
是否在同一排：直接判断
是否在同一排同一侧：直接判断
是否相邻：直接判断 
*/
#include<bits/stdc++.h>
//#define int long long
using namespace std;
string c_1, s_1, c_2, s_2;
bool f_1, f_2, f_3, f_4;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c_1 >> s_1 >> c_2 >> s_2;
//	cout << (s_1[2] <= 'C' && s_2[2] <= 'C') << '\n'; 
	if(c_1 == c_2) f_1 = 1;
	if(f_1 && s_1[0] == s_2[0] && s_1[1] == s_2[1]) f_2 = 1;
	if(f_2 && (s_1[2] <= 'C' && s_2[2] <= 'C')) f_3 = 1;
	if(f_2 && (s_1[2] >= 'D' && s_2[2] >= 'D')) {
		f_3 = 1;
		f_4 = 1;
		cout << "1111";
		return 0;
	}
	if(f_3 && abs(s_1[2] - s_2[2]) == 1) f_4 = 1;
	cout << f_1 << f_2 << f_3 << f_4;
	return 0;
}
