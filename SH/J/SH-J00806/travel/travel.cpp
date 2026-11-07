#include <bits/stdc++.h>
using namespace std;
bool f(char x)
{
	if(x == 'A' || x == 'B' || x == 'C')
	{
		return true;
	}
	return false;
}
bool check(char x, char y)
{
	if((x == 'A' && y == 'B') || (x == 'B' && y == 'A') || (x == 'C' && y == 'B') || (x == 'B' && y == 'C') || (x == 'D' && y == 'F') || (x == 'F' && y == 'D'))
	{
		return true;
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a != c)
	{
		cout << "0000";
		return 0;
	}
	else if(!((b[0] == d[0]) && (b[1] == d[1])))
	{
		cout << "1000";
		return 0;
	}
	else
	{
		cout << "11";
		if(f(b[2]) != f(d[2]))
		{
			cout << "00";
			return 0;
		}
		else
		{
			cout << "1";
			cout << int(check(b[2],d[2]));
		}
	}
	return 0;	
} 
