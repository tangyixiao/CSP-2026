#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string a1, a2, b1, b2;

int main(){
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> a1 >> b1 >> a2 >> b2;
	cout << (a1 == a2);
	cout << ((a1 == a2) && (b1[0] == b2[0]) && (b1[1] == b2[1]));
	cout << ((a1 == a2) && (b1[0] == b2[0]) && (b1[1] == b2[1]) && ((b1[2] >= 'A' && b1[2] <= 'C' && b2[2] >= 'A' && b2[2] <= 'C') || (b1[2] >= 'D' && b1[2] <= 'E' && b2[2] >= 'D' && b2[2] <= 'E')));
	cout << ((a1 == a2) && (b1[0] == b2[0]) && (b1[1] == b2[1]) && (abs(int(b1[2] - b2[2])) == 1) && ((b1[2] >= 'A' && b1[2] <= 'C' && b2[2] >= 'A' && b2[2] <= 'C') || (b1[2] >= 'D' && b1[2] <= 'E' && b2[2] >= 'D' && b2[2] <= 'E')));

	
	return 0;
}
