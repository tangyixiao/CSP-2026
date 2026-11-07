#include <bits/stdc++.h>
using namespace std;
long long c1 , c2;
string s1 , s2;
int main()
{
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
	{
		cout << "1";
	}
	else
	{
		cout << "0000";
		return 0;
	}
	bool pop = false;
	for (int i = 0;i < s1.size() - 1;i++)
	{
		if (s1[i] == s2[i])
		{
			pop = true;
		}
		else
		{
			pop = false;
		}
	}
	if (pop == true)
	{
		cout << "1";
	}
	else
	{
		cout << "000";
		return 0;
	}
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')
	{
		if (s2[2] == 'A' ||s2[2] == 'B' || s2[2] == 'C')
		{
			cout << "1";
		}
		else
		{
			cout << "00";
			return 0;
		}
	}
	if (s1[2] == 'D' || s1[2] == 'F')
	{
		if (s2[2] == 'D' || s2[2] == 'F')
		{
			cout << "1";
		}
		else
		{
			cout << "00";
			return 0;
		}
	}
	if (s1[2] == 'A' && s2[2] == 'B')
	{
		cout << "1";
	}
	else if (s1[2] == 'B' &&(s2[2] == 'A' || s2[2] == 'C'))
	{
		cout << "1";
	}
	else if (s1[2] == 'C' && s2[2] == 'B')
	{
		cout << "1";
	}
	else if ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
