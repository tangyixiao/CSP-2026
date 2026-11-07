#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool check1(string a, string b)
{
	if(a[0] != b[0]) return false;
	if(a[1] != b[1]) return false;
	return true;
}
bool check2(string a, string b)
{
	if(a[2] == 'A' || a[2] == 'B' || a[2] == 'C')
	{
		if(b[2] != 'D' && b[2] != 'F')
		{
			return true;
		}
	}
	if(a[2] == 'D' || a[2] == 'F')
	{
		if(b[2] != 'A' && b[2] != 'B' && b[2] != 'C')
		{
			return true;
		}
	}
	return false;
}
bool check3(string a, string b)
{
	if(a[2] == 'A' && b[2] == 'B') return true;
	if(a[2] == 'B' && b[2] == 'A') return true;
	if(a[2] == 'B' && b[2] == 'C') return true;
	if(a[2] == 'C' && b[2] == 'B') return true;
	if(a[2] == 'D' && b[2] == 'F') return true;
	if(a[2] == 'F' && b[2] == 'D') return true;
	return false;
}
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(check1(c1, c2) == true) 
	{
		cout << "1";
	}
	else 
	{
		cout << "0000";
		return 0;
	}
	if(check1(s1, s2) == true) 
	{
		cout << "1";
	}
	else
	{
		cout << "000";
		return 0;
	}
	if(check2(s1, s2) == true) 
	{
		cout << "1";
	}
	else 
	{
		cout << "00";
		return 0;
	}
	if(check3(s1, s2) == true) cout << "1";
	else cout << "0";
	return 0;
} 
