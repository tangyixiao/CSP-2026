#include <iostream>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string a1,b1,a2,b2;
	a1 += s1[0];
	a1 += s1[1];
	b1 = s1[2];
	a2 += s2[0];
	a2 += s2[1];
	b2 = s2[2];
	if (c1 != c2)
	{
		cout << "0000";
		return 0;
	}
	else
	{
		cout << "1";
		if (a1 != a2)
		{
			cout << "000";
			return 0;
		}
		else
		{
			cout << "1";
			if (("A" <= b1 && b1 <= "C") && ("A" <= b2 && b2 <= "C"))
			{
				cout << "1";
				if ((b1 == "A" && b2 == "B") || (b1 == "B" && b2 == "C") || (b1 == "B" && b2 == "A") || (b1 == "C" && b2 == "B"))
				{
					cout << "1";
				}
				else
				{
					cout << "0";
				}
			}
			else if (("D" <= b1 && b1 <= "F") && ("D" <= b2 && b2 <= "F"))
			{
				cout << "1";
				if ((b1 == "D" && b2 == "F") || (b1 == "F" && b2 == "D"))
				{
					cout << "1";
				}
				else
				{
					cout << "0";
				}
			}
			else
			{
				cout << "00";
				return 0;
			}
		}
	}
	return 0;
}