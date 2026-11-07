#include<bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;
int num1, num2;
int p1, p2, seat1, seat2;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	num1 = c1[0] == '0' ? c1[1] - '0' : 10 + c1[1] - '0';
	num2 = c2[0] == '0' ? c2[1] - '0' : 10 + c2[1] - '0';
	p1 = s1[0] == '0' ? s1[1] - '0' : 10 + s1[1] - '0';
	p2 = s2[0] == '0' ? s2[1] - '0' : 10 + s2[1] - '0';
	seat1 = (s1[2] < 'D') ? (s1[2] - 'A') : 4;
	seat2 = (s2[2] < 'D') ? (s2[2] - 'A') : 4;
	if(num1 != num2)
	{
		cout << "0000";
		return 0;
	}
	cout << "1";
	if(p1 != p2)
	{
		cout << "000";
		return 0;
	}
	cout << "1";
	if((seat1 <= 2 && seat2 >= 3) || (seat1 >= 3 && seat2 <= 2))
	{
		cout << "00";
		return 0;
	}
	cout << "1";
	if(abs(seat1 - seat2) == 1)
		cout << "1";
	else
		cout << "0";
	
	return 0;
}
