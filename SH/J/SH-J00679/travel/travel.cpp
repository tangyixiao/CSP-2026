#include<bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int change(char c)
{
	if(c == 'F') return 5;
	return c - 'A' + 1;
}

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout); 
	cin>>c1>>s1>>c2>>s2;
	if(c1 != c2)
	{
		cout<<"0000";
		return 0; 
	}
	cout<<"1";
	if(s1[0] != s2[0] || s1[1] != s2[1])
	{
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if((change(s1[2]) <= 3) != (change(s2[2]) <= 3))
	{
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(abs(change(s1[2]) - change(s2[2])) == 1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
