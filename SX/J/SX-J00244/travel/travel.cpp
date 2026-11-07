#include <bits/stdc++.h>
using namespace std;
#define int long long
string s1, s2, s3, s4;
int temp(char x, char y){
	return (x - '0') * 10 + (y - '0');
}
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;
	if (s1 == s3) cout << 1;//
	else cout << 0;//
	int paix = temp(s4[0], s4[1]);
	int paiy = temp(s2[0], s2[1]);
	if (s1 == s3 && paix == paiy) cout << 1;//
	else cout << 0;//
	bool flag1 = 0, flag2 = 0;
	if (s2[2] >= 'A' && s2[2] <= 'C') flag1 = 1;
	else flag1 = 0;
	if (s4[2] >= 'A' && s4[2] <= 'C') flag2 = 1;
	else flag2 = 0;
	if (s1 == s3 && paix == paiy && flag1 == flag2) cout << 1;//
	else cout << 0;//
	if (s1 == s3 && paix == paiy && flag1 == flag2 && abs(s4[2] - s2[2]) == 1) cout << 1;//
	else cout << 0;//
	return 0;
}