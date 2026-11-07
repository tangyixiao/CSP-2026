#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1!=c2)
	{
		cout << "0000";
	}
	else
	{
		if(s1.substr(0,2)!=s2.substr(0,2))
		{
			cout << "1000";
		}
		else
		{
			char w1=s1[2],w2=s2[2];
			if(w1>='D'&&w2<='D')
			{
				cout << "1100";
			}
			if(w1<='C'&&w2>='D')
			{
				cout << "1100";
			}
			else
			{
				if(abs(int(w1-w2))<=1)
				{
					cout << "1111";
				}
				else
				{
					cout << "1110";
				}
			}
		}
	}
	return 0;
}