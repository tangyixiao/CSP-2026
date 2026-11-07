#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//100f


string c1, c2, c3, c4;
int pai1, pai2;
int zuo1, zuo2;
int ans1, ans2, ans3, ans4;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> c2 >> c3 >> c4;
	pai1 = (c2[0] - '0') * 10 + (c2[1] - '0');
	pai2 = (c4[0] - '0') * 10 + (c4[1] - '0');
	zuo1 = c2[2] - 'A';
	zuo2 = c4[2] - 'A';
	if (zuo1 == 5) zuo1 = 4;
	if (zuo2 == 5) zuo2 = 4;
	if (c1 == c3) ans1 = 1;
	if (c1 == c3 && pai1 == pai2) ans2 = 1;
	if (c1 == c3 && pai1 == pai2 && ((zuo1 <= 2 && zuo2 <= 2) || (zuo1 >= 3 && zuo2 >= 3))) ans3 = 1;
	if (c1 == c3 && pai1 == pai2 && ((zuo1 <= 2 && zuo2 <= 2) || (zuo1 >= 3 && zuo2 >= 3)) && abs(zuo1 - zuo2) == 1) ans4 = 1;
	cout << ans1 << ans2 << ans3 << ans4; 
	return 0;
} 
