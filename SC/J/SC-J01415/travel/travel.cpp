#include  <bits/stdc++.h>
using namespace std;
string a1,b1,a2,b2;
char a = 'A',b = 'B',c = 'C',d = 'D',f = 'F';
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 != a2){
		cout << "0000";
		return 0;
	} else cout << "1";
	if (b1[0,1] != b2[0,1]){
		cout << "000";
		return 0;
	} else cout << "1";
	if ((b1[2] == d || b1[2] == f) && (b2[2] == f || b2[2] == f)) cout << "11";
	else if((b1[2] == d || b1[2] == f) && (b2[2] != f || b2[2] != d)) cout << "00";
	else if((b1[2] == a || b1[2] == b || b1[2] == c) && (b2[2] == d || b2[2] == f)) cout << "00";
	else if((b1[2] == a || b1[2] == c) && (b2[2] == a || b2[2] == c)) cout << "10";
	else cout << "11";
	return 0;
}