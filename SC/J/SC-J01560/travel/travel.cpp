#include <bits/stdc++.h>
using namespace std ;

int main()
{
	freopen("travel.in","r",stdin) ;
	freopen("travel.out","w",stdout) ;
	string c1 ,s1 ,c2 ,s2 ;
	cin >> c1 >> s1 >> c2 >> s2 ;
	string a = s1.substr(0 ,2);
	string b = s2.substr(0 ,2) ;
	int x = s1[2] - 'A',y = s2[2] - 'A';
	if (c1 != c2)
	{
		cout << "0000" ;
		return 0 ;
	}
	else cout << "1" ;
	
	if (a != b)
	{
		cout << "000" ;
		return 0 ;
	}
	else cout << "1" ;
	
	if ((x == 0 && (y == 1 || y == 2)) || (x == 1 && (y == 0 || y == 2)) || (x == 2 && (y == 0 || y == 1)))
		cout << "1" ; 
	else if ((x == 3 && y == 5) || (x == 5 && y == 3))
		cout << "1" ;
	else 
	{
		cout << "00" ;
		return 0 ;
	}
		
		
	if (abs(y - x) != 1 && (x != 3 && y != 5))
	{
		cout << "0" ;
		return 0 ;
	}
	else 
	{
		if (s1[2] == 'D' && s2[2] == 'F')	
			cout << "0" ;
		else if (s2[2] == 'D' && s1[2] == 'F')
			cout << "0" ;
		else cout << "1" ;
	}
	return 0 ;
}