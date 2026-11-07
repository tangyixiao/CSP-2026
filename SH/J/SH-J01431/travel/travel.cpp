#include <bits/stdc++.h>
using namespace std;
int ca, sa, cb, sb;
char za, zb;
bool check(char x, char y){
	if (x <= 'C')
		if (y == 'A' || y == 'B' || y == 'C')
			return 1;
	else
		if (y == 'D' || y == 'F')
			return 0;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%d %d%c %d %d%c", &ca, &sa, &za, &cb, &sb, &zb);
	if (ca == cb)
		printf("1");
	else
		printf("0");
	if (ca == cb && sa == sb)
		printf("1");
	else
		printf("0");
	if (ca == cb && sa == sb && check(za, zb))
		printf("1");
	else
		printf("0");
	if (ca == cb && sa == sb && check(za, zb) && abs(za - zb) == 1)
		printf("1");
	else
		printf("0");
	return 0;
}
