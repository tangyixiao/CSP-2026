#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

bool f[150];

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout); 
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2)
	{
		cout <<"0000" <<endl;
		return 0;
	}
	cout << "1";
	if(s1[0] != s2[0] || s1[1] != s2[1])
	{
		cout << "000" << endl;
		return 0;
	}
	cout << 1;
	f[int('D')] = f[int('F')] = true;
	if(f[int(s1[2])] != f[int(s2[2])])
	{
		cout <<"00";
		return 0;
	}
	cout <<1;
	if(f[int(s1[2])])	cout << 1;
	else
	{
		char a = s1[2];
		char b = s2[2];
		if(int(a) > int(b))	swap(a, b);
		if(a == 'A' && b == 'B' || a == 'B' && b == 'C')	cout << 1;
		else	cout <<0;
		cout  << " " << a <<" " <<b;
	}
	return 0;
}
