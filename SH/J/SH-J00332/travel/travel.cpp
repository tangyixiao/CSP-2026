#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int n1, n2;
	string m1, m2;
	cin >> n1 >> m1 >> n2 >> m2;
	bool g2 = (n1 == n2);
	cout << g2;
	string k1, k2;
	k1 += m1[0];
	k1 += m1[1];
	k2 += m2[0];
	k2 += m2[1];
	bool g1 = (k1 == k2);
	cout << (g1 && g2);
	char t1 = m1[2], t2 = m2[2];
	bool g3 = (t1 > 'C' && t2 > 'C' || t1 < 'D' && t2 < 'D');
	cout << (g3 && g2 && g1);
	cout << (g1 && g2 && g3 && (int(t1) - int(t2) == 1 || int(t1) - int(t2) == -1));
	return 0;
}
