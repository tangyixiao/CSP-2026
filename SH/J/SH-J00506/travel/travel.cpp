#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if(a == c)
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	int linea = 0,lineb = 0;
	
	for(int i = 0;i < 2;i++)
	{
		linea *= 10;
		linea += b[i] - '0';
		lineb *= 10;
		lineb += d[i] - '0';
	}
	if(linea == lineb)
	{
		cout << 1;
	}
	else
	{
		cout << "000";
		return 0;
	}
	char c1 = b[b.size() - 1],c2 = d[d.size() - 1];
	int g1,g2;
	if(c1 <= 'C')
	{
		g1 = 0;
	}
	else
	{
		g1 = 1;
	}
	if(c2 <= 'C')
	{
		g2 = 0;
	}
	else
	{
		g2 = 1;
	}
	if(g1 - g2 == 0)
	{
		cout << 1;
		if(abs(c1 - c2) == 1)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << "00";
	}
	
	return 0;
} 
