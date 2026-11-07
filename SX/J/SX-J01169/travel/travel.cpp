#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	string a1,a2,a3,a4;
	//int b1;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2)
	{
		a1="1";
	}
	else
	{
		a1="0";
	}
	if(s1!=s2)
	{
		a2="1";
		a3="1";
		a4="1";
	}
	/*
	for(int i=1;i<=8;i++)
	{
		b1
	}
	*/
	cout << a1+a2+a3+a4;
	//cout << "1111";
	return 0;
}