#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string s1,s2,s3,s4;
string ans;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> s1 >> s2 >> s3 >> s4;
	
	if(s1 == s3)
	{
		ans += "1";
		string s2t,s4t;
		s2t = s2;
		s2t.erase(2,1);
		s4t = s4;
		s4t.erase(2,1);
		if(s2t == s4t)
		{
			ans += "1";
			char c2 , c4;
			c2 = s2[2] , c4 = s4[2];
			if( (c2 >= 'A' && c2 <= 'C' && c4 >= 'A' && c4 <= 'C') )
			{
				ans += "1";
				if( abs(c2 - c4) == 1) ans += "1";
				else ans += "0";
			}
			else if( (c2 >= 'D' && c2 <= 'F' && c4 >= 'D' && c4 <= 'F') )
			{
				ans += "11";
			}
			else 
			{
				ans += "00";
			}
		}
		else
		{
			ans += "000";
		}
	}
	else
	{
		ans = "0000";
	}
	
	cout << ans;
	
	return 0;
} 
