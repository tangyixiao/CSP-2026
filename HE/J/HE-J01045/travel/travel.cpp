#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace::std;
string c1, c2, str1, str2;
bool ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> str1 >> c2 >> str2;
	if(c1 == c2) ans1 = 1;
	string p1 = str1.substr(0, 2);
	string p2 = str2.substr(0, 2);
	if(ans1 && p1 == p2) ans2 = 1;
	char pos1 = str1[2], pos2 = str2[2];
	if(ans2 && (('A' <= pos1 && pos1 <= 'C' && 'A' <= pos2 && pos2 <= 'C') || ('D' <= pos1 && pos1 <= 'E' && 'D' <=pos2 && pos2 <= 'E'))) ans3 = 1;
	if(ans3 && pos1 != pos2 && abs((int)pos1 - (int)pos2) == 1) ans4 = 1;
	cout << (ans1 ? 1 : 0);
	cout << (ans2 ? 1 : 0);
	cout << (ans3 ? 1 : 0);
	cout << (ans4 ? 1 : 0);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
