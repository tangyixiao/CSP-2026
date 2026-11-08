#include <iostream>
using namespace std;

int main() {
	freopen("travel.in",  "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	// 两张车票对应的座位是否在同一节车厢
	bool a = (c1==c2);
	cout << a;
	
	// 两张车票对应的座位是否在同一节车厢的同一排
	bool b = ((s1[0]-'0')*10+(s1[1]-'0') == (s2[0]-'0')*10+(s2[1]-'0'));
	cout << (a && b);
	
	
	// 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
	bool c;
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') c = (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C');
	else c = (s2[2] == 'D' || s2[2] == 'F');
	cout << (a && b && c);
	
	// 两张车票对应的座位是否相邻
	bool d = (s1[2]+1 == s2[2] || s1[2]-1 == s2[2]);
	cout << (a && b && c && d);
}
