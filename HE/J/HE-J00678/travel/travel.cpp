#include<bits/stdc++.h>
using namespace std;
char c1[4],s1[4],c2[4],s2[4];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> c2 >> s1 >> s2; 
	if(c1[0] == s1[0]&&c1[1] == s1[1])
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	if(c2[0] == s2[0]&&c2[1] == s2[1])
	{
		cout << 1;	

	} 
	else
	{
		cout << 0;
	}
	if(c2[2] == 'A'&& s2[2] == 'B')
	{
		cout << 1;
	}
	else if(c2[2] == 'B'&& s2[2] == 'A')
	{
		cout << 1;
	}
	else if(c2[2] == 'C'&& s2[2] == 'B')
	{
		cout << 1;
	}
	else if(c2[2] == 'C'&& s2[2] == 'A')
	{
		cout << 1;
	}
	else if(c2[2] == 'A'&& s2[2] == 'C')
	{
		cout << 1;
	}
	else if(c2[2] == 'B'&& s2[2] == 'C')
	{
		cout << 1;
	}
	else if(c2[2] == 'D'&& s2[2] == 'E')
	{
		cout << 1;
	}
	else if(c2[2] == 'E'&& s2[2] == 'D')
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	if(c2[2] == 'A'&& s2[2] == 'B')
	{
		cout << 1;
	}
	else if(c2[2] == 'B'&& s2[2] == 'A')
	{
		cout << 1;
	}
	else if(c2[2] == 'C'&& s2[2] == 'B')
	{
		cout << 1;
	}
	else if(c2[2] == 'B'&& s2[2] == 'C')
	{
		cout << 1;
	}
	else if(c2[2] == 'D'&& s2[2] == 'E')
	{
		cout << 1;
	}
	else if(c2[2] == 'E'&& s2[2] == 'D')
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}

