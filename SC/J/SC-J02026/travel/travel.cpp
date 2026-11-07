#include <bits/stdc++.h>
using namespace std;

int c1, c2;
string s1, s2;
bool flag_a, flag_b, flag_c, flag_d;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	flag_a = flag_b = flag_c = flag_d = false;
	if(c1 == c2)
	{
		flag_a = true;
		if((s1[0] - '0') * 10 + (s1[1] - '0') == (s2[0] - '0') * 10 + (s2[1] - '0'))
		{
			flag_b = true;
			char a = s1[2], b = s2[2];
			if(('A' <= a && a <= 'C' && 'A' <= b && b <= 'C') || (a >= 'D' && a <= 'F' && b >= 'D' && b <= 'F'))
			{
				flag_c = true;
				if(abs(int(a - 'A') - int(b - 'A')) == 1) flag_d = true;
			}
		}
	}
	cout << flag_a << flag_b << flag_c << flag_d;
	return 0;
}