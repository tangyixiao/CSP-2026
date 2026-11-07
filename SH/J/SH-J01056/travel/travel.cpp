#include <bits/stdc++.h>
using namespace std;
string c1, c2, c3, c4;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> c2 >> c3 >> c4;
	int a = c1[0], b = c3[0], c = c1[1], d = c3[1];
	int pai1 = c2[0], pai2 = c4[0], pai3 = c2[1], pai4 = c4[1];
	if (a == b && c == d)
	{
		cout << 1;
		if (pai1 == pai2 && pai3 == pai4)
		{
			cout << 1;
			if (c2[2] >= 65 && c2[2] <= 67 && c4[2] >= 65 && c4[2] <= 67)
			{
				cout << 1;
				if (c2[2] == 65 && c4[2] == 67 || c2[2] == 67 && c4[2] == 65)
				{
					cout << 0;
				}
				else
				{
					cout << 1;
				}
			}
			else if (c2[2] <= 68 && c2[2] >= 70 && c4[2] >= 68 && c4[2] <= 70)
			{
				cout << "11";
			}
			else
			{
				cout << "00";
			}
		}
		else
		{
			cout << "000";
		}
	} 
	else
	{
		cout << "0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
