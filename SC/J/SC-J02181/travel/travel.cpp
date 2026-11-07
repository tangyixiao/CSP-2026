#include <bits/stdc++.h>
using namespace std;

int main ()
{
	freopen ("travel.in" , "r" , stdin);
	freopen ("travel.out" , "w" , stdout);
	string s1 , s2 , s3 , s4;
	cin >> s1 >> s2 >> s3 >> s4;
	bool flag1 = false , flag2 = false , flag3 = false , flag4 = false;
	if (s1 == s3)
	{
		flag1 = true;
	}
	
	if (s2 [0] == s4 [0] && s2 [1] == s4 [1] && flag1 == true)
	{
		flag2 = true;
	}
	string s7 = "" , s8 = "";
	s7 [0] = char (s2 [2]) , s8 [0] = char (s4 [2]);
	//cout << "----------------------------->" << s1 << " " << s3;
	if (((s2 [2] == 'A' && (s4 [2] == 'B' || s4 [2] == 'C') || (s2 [2] == 'D' && s4 [2] == 'E')) ||
	(s2 [2] == 'B' && (s4 [2] == 'A' || s4 [2] == 'C') || (s2 [2] == 'E' && s4 [2] == 'D'))
	|| (s2 [2] == 'C' && (s4 [2] == 'B' || s4 [2] == 'A') ))
	&& flag1 == true && flag2 == true)
	{
		flag3 = true; 
	}
	//cout << "------------------->" << flag3;
	if (flag1 == true && flag2 == true && flag3 == true
	&& ((s2 [2] == 'A' && s4 [2] == 'B') || (s2 [2] == 'B' && s4 [2] == 'C') || (s2 [2] == 'D' && s4 [2] == 'E')
	|| (s2 [2] == 'B' && s4 [2] == 'A') || (s2 [2] == 'C' && s4 [2] == 'B') || (s2 [2] == 'E' && s4 [2] == 'D')))
	{
		flag4 = true;
	}
	if (flag1 == true)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	if (flag2 == true)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	if (flag3 == true)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	if (flag4 == true)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
