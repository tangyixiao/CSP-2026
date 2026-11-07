#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
//输入的第一行包含四个字符串 c1, s1, c2, s2，分别表示小 R 的车票上的车厢号、座位号，以及小 X 的车票上的车厢号、座位号
string c1, s1, c2, s2;
/*
? 两张车票对应的座位是否在同一节车厢；
? 两张车票对应的座位是否在同一节车厢的同一排；
? 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
? 两张车票对应的座位是否相邻。
*/
ll is_same_car;
ll is_same_hang;
ll is_same_side;
ll is_together;
/*
02 02B 02 01A
1000
02 01A 02 01B
1111
02 01C 02 01A
1110
02 01C 02 01D
1100
02 01A 03 01A
0000
100pts
*/
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		is_same_car = 1;
	}
	if (s1[0] == s2[0] && is_same_car && s1[1] == s2[1]) {
		is_same_hang = 1;
	}
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
		if (s2[2] == 'B' || s2[2] == 'C' || s2[2] == 'A') {
			is_same_side = is_same_hang ? 1 : 0;
			if (abs(s2[2] - s1[2]) == 1) {
				is_together = is_same_hang ? 1 : 0;
			}	
		}
	}
	if (s1[2] == 'D' || s1[2] == 'F') {
		if (s2[2] == 'D' || s2[2] == 'F') {
			is_same_side = is_same_hang ? 1 : 0;
			if (abs(s2[2] - s1[2]) == 2) {
				is_together = is_same_hang ? 1 : 0;
			}
		}
	}
	cout << is_same_car << is_same_hang << is_same_side << is_together;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
