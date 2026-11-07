#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a = 0, b = 0, c = 0, d = 0;
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 == c2)
    {
        a = 1;
        if (s1[0] == s2[0] && s1[1] == s2[1])
        {
            b = 1;
            char c1 = s1[2], c2 = s2[2];
            if ((c1 == 'A' && c2 == 'B') || (c1 == 'B' && c2 == 'A') || (c1 == 'B' && c2 == 'C') || (c1 == 'C' && c2 == 'B'))
            {
            	c = 1;
                d = 1;
            }
            else if ((c1 == 'A' && c2 == 'C') || (c1 == 'C' && c2 == 'A'))
            {
            	c = 1;
			}
            if ((c1 == 'D' && c2 == 'F') || (c1 == 'F' && c2 == 'D'))
            {
                c = 1;
                d = 1;
            }
        }
    }
    cout << a << b << c << d;
    return 0;
}
