#include <iostream>//01381 
#include <cmath>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int CR, RR;
	string T1, T2;
	cin >> CR >> T1 >> RR >> T2;
	if (CR != RR) {
		cout << "0000";
		return 0;
	}
	int CX = T1[2] - 'A', RX = T2[2] - 'A';
	if (T2[1] != T1[1] || T1[0] != T2[0]) {
		cout << "1000";
		return 0;
	}
	if ((CX < 3 && RX > 2)||(CX > 2 && RX < 3)) {
		cout << "1100";
		return 0;
	}
	if (abs(CX - RX) != 1 && !(CX == 3 && RX == 5) && !(RX == 3 && CX == 5)) {
		cout << "1110";
		return 0;
	}
	cout << "1111";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
