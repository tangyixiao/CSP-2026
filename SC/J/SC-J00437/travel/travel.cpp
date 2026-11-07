#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fx01(char a, char b)
{
	if ((a <= 'C' && b <= 'C') || (a > 'C' && b > 'C'))
		return true;
	return false;
}

bool fx02(char a, char b)
{
	if (!fx01(a, b))
		return false;
	
	if (a <= 'C')
		return abs(a - b) == 1;
	else
		return true;
}

// RP++
int main()
{
	freopen("travel.in", "r", stdin);
//	freopen("..\\cspj\\down\\travel\\travel5.in", "r", stdin);
	freopen("travel.out", "w", stdout);
//	freopen("..\\cspj\\down\\travel\\travel.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if (a != c)
		return cout << "0000", 0;
	
	string e(b.begin(), b.begin() + 2), f(d.begin(), d.begin() + 2);
	if (e != f)
		return cout << "1000", 0;
	
	char pos01 = b.back(), pos02 = d.back();
	if (!fx01(pos01, pos02))
		return cout << "1100", 0;
	
	if (!fx02(pos01, pos02))
		return cout << "1110", 0;
	
	cout << "1111";
	
	return 0;
}