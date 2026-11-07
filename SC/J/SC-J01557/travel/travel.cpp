#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	cout << (a == c);
	cout << (b[0] == d[0] && b[1] == d[1]);
	cout << ((b[2] <= 'C' && d[2] <= 'C') || (b[2] > 'C' && d[2] > 'C'));
	cout << (((abs(b[2] - d[2]) == 1) && !((b[2] == 'D' || b[2] == 'C') && (b[2] == 'D' || b[2] == 'C'))) || ((abs(b[2] - d[2]) == 2) && ((b[2] == 'D' || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F'))));
	return 0;
}