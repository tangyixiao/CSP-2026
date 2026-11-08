#include <bits/stdc++.h>
using namespace std;

namespace Carrot {
	using ll = long long;
	int rx, rp;
	int xx, xp;
	string rz, xz;
	
	void read()
	{
		cin >> rx >> rz >> xx >> xz;
		if(rz[2] == 'F') rz[2] = 'E';
		if(xz[2] == 'F') xz[2] = 'E';
		rp = (rz[0] - '0') * 10 + (rz[1] - '0');
		xp = (xz[0] - '0') * 10 + (xz[1] - '0');
	}
	bool que1() { return rx == xx; }
	bool que2() { return que1() && rp == xp; }
	bool que3() { return que2() && (int(rz[2] - 'A') > 2) == (int(xz[2] - 'A') > 2); }
	bool que4() { return que3() && abs(int(rz[2] - xz[2])) == 1; }
	void ans() { cout << que1() << que2() << que3() << que4(); }
}

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	Carrot::read();
	Carrot::ans();
	
	return 0;
}
