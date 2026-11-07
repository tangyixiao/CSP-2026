#include<iostream>
#include<cstring>
typedef long long ll;
const int N = 1e6 + 10;
using namespace std;
void solve()
{
	string m1, s1, m2, s2;
	cin >> m1 >> s1 >> m2 >> s2;
	if (m1 == m2)
		cout << 1;
	else if (m1 != m2)
		cout << 0;
		
		char c0 = s1[0];
		char c1 = s1[1];
		char c2 = s1[2];
		int  c3 = (c0 - '0')* 10 + (c1 - '0');
		int  m = (c2 == 'A' || c2 == 'B' || c2 == 'C') ? 0 : 1;
		char x0 = s2[0];
		char x1 = s2[1];
		char x2 = s2[2];
		int  x3 = (x0 - '0')* 10 + (x1 - '0');
		int  k = (x2 == 'A' || x2 == 'B' || x2 == 'C') ? 0 : 1;
	if (m1 == m2 && c3 == x3)
		cout << 1;
	else
		cout << 0;
	if (m1 == m2 && k == m && c3 == x3)
		cout << 1;
	else
		cout << 0;
	if (m1 == m2 && k == m && c3 == x3 && abs((c2-'0')-(x2-'0')) == 1)
		cout << 1;
	else
		cout << 0;
	
}
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	solve();
	fclose(stdin);fclose(stdout);
	return 0;
}