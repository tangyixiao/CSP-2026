#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
string c1,c2,s1,s2;
bool check1(char a,char b)
{
	if('A'<=a&&a<='C'&&'A'<=b&&b<='C')
		return true;
	if('D'<=a&&a<='F'&&'D'<=b&&b<='F')
		return true;
	return false;
}
bool check2(char a,char b)
{
	if(a+1==b||b+1==a)
		return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
		if(s1.substr(0,2)==s2.substr(0,2))
		{
			cout<<1;
			if(check1(s1[2],s2[2]))
			{
				cout<<1;
				if(check2(s1[2],s2[2]))
					cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
 } 
