#include <bits/stdc++.h>
using namespace std ;

map<char , int> mp ;

int main()
{
	freopen("travel.in" , "r" , stdin) ;
	freopen("travel.out" , "w" , stdout) ;
	string s1 , c1 , s2 , c2 ;
	cin >> s1 >> c1 >> s2 >> c2 ;
	mp['A'] = 1 ;
	mp['B'] = 2 ;
	mp['C'] = 3 ;
	mp['D'] = 4 ;
	mp['E'] = 5 ;
	if(s1 == s2)
	{
		cout << 1 ;
		if(c1[0] == c2[0] and c1[1] == c2[1])
		{
			cout << 1 ;
			int a = mp[c1[2]] ;
			int b = mp[c2[2]] ;
			if((a <= 3 and b <= 3) or (a > 3 and b > 3))
			{
				cout << 1 ;  
				if(abs(a - b) == 1)
				{
					if(a == 3 and b == 4) cout << 0 << endl ;
					else if(a == 4 and b == 3) cout << 0 << endl ;
					else cout << 1 << endl ;
				}
				else cout << 0 << endl ;
			}
			else cout << "00" << endl ;
		}
		else cout << "000" << endl ;
	}
	else
	{
		cout << "0000" << endl ;
	}
}
