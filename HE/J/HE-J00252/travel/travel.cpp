#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2) cout << "0000";
	else
	{
		cout << 1;
		int t1,t2;
		t1 = (s1[0] - '0') * 10 + (s1[1] - '0');
		t2 = (s2[0] - '0') * 10 + (s2[1] - '0');
		if(t1 != t2) cout << "000";
		else
		{
			cout << 1;
			int p1,p2;
			p1 = (int)s1[2],p2 = (int)s2[2];
			if(p1 >= 65 && p1 <= 67 && p1 >= 65 && p2 <= 67)
			{
				cout << 1;
				if(abs(p1 - p2) == 1) cout << 1;
				else cout << 0;
			}
			else if((p1 == 68 || p1 == 69) && (p2 == 68 || p2 == 69)) cout << "11";
			else cout << "00";
		}
		
	}
	fclose(stdout);
	fclose(stdin);
	return 0;
}
