#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int a,c,x,y;
string b,d;
char s,t;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	for (int i = 0;i <= 1;i++)
		x = x * 10 + (b[i] - '0');
	for (int i = 0;i <= 1;i++)
		y = y * 10 + (d[i] - '0');
	s = (char)b[2];
	t = (char)d[2];
	if (a == c)
		cout << 1;
	else
		cout << 0;
	if (a == c && x == y)
		cout << 1;
	else
		cout << 0;
	if (a == c && x == y && ((s <= 'C' && t <= 'C') || (s == 'D' && t == 'F') || (s == 'F' && t == 'D')))
		cout << 1;
	else
		cout << 0;
	if (a == c && x == y && (((s == t + 1) || (s == t - 1))) && (s != 'F' && t != 'C') && (s != 'C' && t != 'F'))
		cout << 1;
	else
		cout << 0;
	return 0;
}
