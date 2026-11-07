#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, c;
	string b, d;
	cin >> a >> b >> c >> d;
	if(a != c)
		cout << "0000";
	else if(b.substr(0, 2) != d.substr(0, 2))
		cout << "1000";
	else if((b[2] <= 'C' && d[2] >= 'D') || (b[2] >= 'D' && d[2] <= 'C'))
		cout << "1100";
	else if(b[2] - 1 != d[2] && b[2] + 1 != d[2] && !(d[2] == 'D' && b[2] == 'F') && !(d[2] == 'F' && b[2] == 'D'))
		cout << "1110";
	else
		cout << "1111";
	return 0;
}