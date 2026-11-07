#include<bits/stdc++.h>
using namespace std;
#define ll long long
int c1,c2,s1,s2;
char a1,a2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> a1 >> c2 >> s2 >> a2;
	if (c1 == c2) cout << 1;
	else cout << 0;
	if (c1 == c2 && s1 == s2) cout << 1;
	else cout << 0;
	if (c1 == c2 && s1 == s2 && ((a1 >= 'D' && a2 >= 'D') || (a1 <= 'C' && a2 <= 'C'))) cout << 1;
	else cout << 0;
	if (c1 == c2 && s1 == s2 && ((a1 >= 'D' && a2 >= 'D') || (a1 <= 'C' && a2 <= 'C')) && abs(a1 - a2) == 1) cout << 1;
	else cout << 0;
	return 0;
}
