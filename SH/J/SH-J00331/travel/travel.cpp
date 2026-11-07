#include <iostream>
#include <cmath>
using namespace std;
string s1, s2, s3, s4;
int z1, z2;
char c1, c2;
bool q1, q2, q3, q4;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	z1 = (s2[0] - '0') * 10 + (s2[1] - '0'), c1 = s2[2];
	z2 = (s4[0] - '0') * 10 + (s4[1] - '0'), c2 = s4[2];
	q1 = (s1 == s3);
	if (q1)
	{
		if (z1 == z2) q2 = 1;
		if (q2) q3 = ((c1 <= 'C' && c2 <= 'C') || (c1 > 'C' && c2 > 'C'));
		if (q3) q4 = (abs(c1 - c2) == 1); 
	}
	cout << q1 << q2 << q3 << q4;
	return 0;
}
//at 8:49 
//Ð¡ÌÇÌâ ºì 
