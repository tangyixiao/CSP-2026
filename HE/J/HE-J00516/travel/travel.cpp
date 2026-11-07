#include <bits/stdc++.h>
using namespace std;
char c[5],s[5],l1,l2;//c表示车厢号，l表示列号，r表示排号
int r1,r2,c1,c2;
int num(char a){
	return a - '0';
}
bool check(char a,char b){
	int v = 0;
	if (a == 'A' || a == 'B' || a == 'C') v++;
	if (b == 'A' || b == 'B' || b == 'C') v++;
	if (v == 1) return false;
	return true;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c + 1 >> s + 1;
	c1 = num(c[1]) * 10 + num(c[2]);
	r1 = num(s[1]) * 10 + num(s[2]);
	l1 = s[3];
	cin >> c + 1 >> s + 1;
	c2 = num(c[1]) * 10 + num(c[2]);
	r2 = num(s[1]) * 10 + num(s[2]);
	l2 = s[3];
	if (c1 == c2){
		cout << 1;
		if (r1 == r2){
			cout << 1;
			if (check(l1,l2)){
				cout << 1;
				if (abs((int)l1 - (int)l2) == 1) cout << 1;
				else cout << 0;
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
}
