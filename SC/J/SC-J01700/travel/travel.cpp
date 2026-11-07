#include <iostream>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, s2;
	bool q1, q2, q3, q4;
	int c1, c2;
	cin >> c1 >> s1 >> c2 >> s2;
	q1 = (c1 == c2);
	q2 = (q1 && (s1[0] == s2[0] && s1[1] == s2[1]));
	q3 = (q2 && (s1[2] - 'A' <= 2 && s2[2] - 'A' <= 2 || s1[2] - 'A' >= 3 && s2[2] - 'A' >= 3));
	q4 = ((q1 && q2) && q3);
	cout << q1 << q2 << q3 << q4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}