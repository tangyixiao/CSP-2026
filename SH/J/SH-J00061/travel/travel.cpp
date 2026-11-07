#include <bits/stdc++.h>
using namespace std ;

int main ()
{
	freopen ("travel.in" , "r" , stdin) ;
	freopen ("travel.out" , "w" , stdout) ;
	string c1 , s1 , c2 , s2 ; 
	cin >> c1 >> s1 >> c2 >> s2 ;
	if (c1 != c2)
	{
		cout << "0000" << '\n' ;
	}
	else
	{
		cout << 1 ;
		if (s1[0] != s2[0] || s1[1] != s2[1]) cout << "000" << '\n' ;
		else
		{
			cout << 1 ;
			bool flag = false , flag2 = false ;
			if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') flag = true ;
			if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') flag2 = true ;
			if (flag != flag2) cout << "00" << '\n' ;
			else
			{
				cout << 1 ;
				if (abs (int (s1[2] - s2[2])) == 1) cout << 1 << '\n' ;
				else cout << 0 << '\n' ;
			}
		}
	}
	return 0 ;
}
