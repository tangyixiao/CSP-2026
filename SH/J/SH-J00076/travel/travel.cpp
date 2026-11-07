#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool f1 = true,f2 = true,f3 = true;
	if (c1 == "01" || c1 == "16" || c2 == "01" || c2 == "16")
	{
		cout << "0000";
		return 0;
	}
	for (int i = 0;i < 2;i++)
	{
		if (c1[i] != c2[i])
		{
			f1 = false;
			break;
		}
	}
	if (f1 == true)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	for (int i = 0;i < 2;i++)
	{
		if (s1[i] != s2[i])
		{
			f2 = false;
			break;
		}
	}
	if (f2 == true && f1 == true)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	if (f1 == true && f2 == true && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')))
	{
		cout << 1;
	}
	else
	{
		f3 = false;
		cout << 0;
	}
	if (f3 == true)
	{
		if ((s1[2] == s2[2] + 1 || s2[2] == s1[2] + 1) && (s1[2] <= 'C' && s2[2] <= 'C'))
		{
			cout << 1;
		}
		else if ((s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F'))
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
		cout << 0;
	}
	return 0;
}
