#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
string s1,s2,c1,c2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
	{
		cout << '1';
		if(s1[0] == s2[0] && s1[1] == s2[1])
		{
			cout << '1';
			bool cur1,cur2;//0->ABC,1->DF
			if(s1[2] <='C')
			{
				cur1 = 0;
			}else
			{
				cur1 = 1;
			}
				if(s2[2] <='C')
			{
				cur2 = 0;
			}else
			{
			cur2 = 1;
			}
			if(cur1 == cur2)
			{
				cout << '1';
				if(abs(s1[2] - s2[2]) == 1)
				{
					cout << '1';
				}else
				{
					cout << '0';
				}
			}else
			{
				cout << "00";
			}
		}else
		{
			cout << "000";
		}
	}else
	{
		cout << "0000";
	}
}