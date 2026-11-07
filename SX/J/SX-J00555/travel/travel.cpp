#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1 == s3)
	{
		cout << 1;
	}
	else
	{
		for (int i = 1;i <= 4;i++)
		{
			cout << 0;
		}
		return 0;
	}
	int num1 = 10*(s2[0]-'0')+(s2[1]-'0');
	int num2 = 10*(s4[0]-'0')+(s4[1]-'0');
	if(num1 == num2)
	{
		cout << 1;
	}
	else
	{
		for (int i = 1;i <= 3;i++)
		{
			cout << 0;
		}
		return 0;
	}
	int x1 = s2[2]-'A';
	int x2 = s4[2]-'A';
	if((x1 < 3&&x2 < 3)||(x1 >= 3&&x2 >= 3))
	{
		cout << 1;
	}
	else
	{
		for (int i = 1;i <= 2;i++)
		{
			cout << 0;
		}
		return 0;
	}
	if((x1<3&&abs(x1-x2)==1)||x1>=3)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}