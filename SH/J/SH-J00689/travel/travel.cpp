#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool flag1=false, flag2=false, flag3=false, flag4=false;
	if(c1 == c2) flag1 = true;
	string a = s1.substr(0, 1), b = s2.substr(0, 1);
	if(flag1 && a == b) flag2 = true;
	char t1 = s1[2], t2 = s2[2];
	if(flag2 && (t1<='C' && t2<='C' || t1>='D' && t2>='D')) flag3 = true;
	if(t1 == 'F') t1 = 'E';
	if(t2 == 'F') t2 = 'E';
	if(flag3 && abs(t1-t2) == 1) flag4 = true;
	if(flag1) cout << 1;
	else cout << 0;
	if(flag2) cout << 1;
	else cout << 0;
	if(flag3) cout << 1;
	else cout << 0;
	if(flag4) cout << 1;
	else cout << 0;
	return 0;
}
