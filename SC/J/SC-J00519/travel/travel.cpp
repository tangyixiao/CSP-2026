#include <bits/stdc++.h>
using namespace std;

string str[4];

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for(int i = 0;i <= 3;i++)
		cin >> str[i];
	
	if(str[0] == str[2])
	{
		cout << '1';
		if(str[1][0] == str[3][0] && str[1][1] == str[3][1])
		{
			cout << '1';
			
			int t1, t2;
			if(str[1][2] <= 'C')
				t1 = 1;
			else
				t1 = 0;
			if(str[3][2] <= 'C')
				t2 = 1;
			else
				t2 = 0;
			if(t1 == t2)
			{
				cout << '1';
				
				int t3 = (int)(str[1][2] - 'A');
				int t4 = (int)(str[3][2] - 'A');
				if(abs(t3 - t4) == 1)
					cout << '1';
				else
					cout << '0';
			}
			else
			{
				cout << "00";
				return 0;
			}
		}
		else
		{
			cout << "000";
			return 0;
		}
	}
	else
	{
		cout << "0000";
		return 0;
	}
	return 0;
}