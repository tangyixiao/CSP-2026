#include <iostream>
#include <string>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	bool udr, udx;//x, y 的上侧下侧，1为上，0为下
	string rt, xt, rs, xs;
	cin >> rt >> rs >> xt >> xs;
	if ('A' <= rs[2] && rs[2] <= 'C')
	{
		udr = 1;
	}
	else
	{
		udr = 0;
	}
	if ('A' <= xs[2] && xs[2] <= 'C')
	{
		udx = 1;
	}
	else
	{
		udx = 0;
	}
	if (!(rt == xt))
	{
		cout << "0000";
	}
	else if(!(rs[0] == xs[0] && rs[1] == xs[1]))
	{
		cout << "1000";
	}
	else if (udr != udx)
	{
		cout << "1100";
	}
	else if (!(rs[2] + 1 == xs[2] || rs[2] - 1 == xs[2]))
	{
		cout << "1110";
	}
	else
	{
		cout << "1111";
	}
	return 0;
}