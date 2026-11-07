#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,a1,b,b1;
	char a2,b2;
	cin >> a >> a1 >> a2 >> b >> b1 >> b2;
	if(a != b || a == "01" || a == "16" || b == "01" || b == "16")
	{
		cout << "0";
	}
	else
	{
		cout << "1";
	}
	if(a2 == b2)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	if((a2 >= "D" && a2 <= "F") && (b2 >= "D" && b2 <= "F"))
	{
		cout << "1";
	}
	else if((a2 >= "A" && a2 <= "C") && (b2 >= "A" && b2 <= "C"))
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	if(a1 == b1)
	{
		if(a2 == b2 - 1 && a2 != "C")
		{
			cout << "1";
		}
		else if(a2 == b2 + 1 && a2 != "D")
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	return 0;
} 
