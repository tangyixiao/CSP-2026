#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int chea, cheb;
	string sta, stb;
	cin >> chea >> sta >> cheb >> stb;
	int sche, sp, ssid, sim;
	if (chea == cheb)
	{
		sche = 1;
		if (sta.substr(0, 2) == stb.substr(0, 2))
			sp = 1;
		else
			sp = 0;
		if ((sta[2] >= 'A' && sta[2] <= 'C'))
		{
			if (stb[2] >= 'A' && stb[2] <= 'C')
				ssid = 1;
		}
		else if (sta[2] == 'D' || sta[2] == 'F')
		{
			if (stb[2] == 'D' || stb[2] == 'F')
			{
				ssid = 1;
			}
		}
		else
			ssid = 0;
		if (sta[2] == 'D')
			if (stb[2] == 'F')
				sim = 1;
		else if (sta[2] == 'D')
			if (stb[2] == 'F')
				sim = 1;
		else if (abs(sta[2] - sta[2]) == 1)
			sim = 1;
		else
			sim = 0;
	}
	else
		sche = 0, sp = 0, ssid = 0, sim = 0;
	cout << sche << sp << ssid << sim;
	return 0;
}
