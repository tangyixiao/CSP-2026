#include <bits/stdc++.h>
using namespace std;
string s1,s2;
bool st(string a,string b)
{
	for (int i = 0;i < 2;i++)
	{
		if (s1[i]!=s2[i])
		{
			return false;
		}
	}
	return true;
}
bool str(string s1,string s2)
{
	if ((s1[2]-'A'>=3&&s2[2]-'A'>=3)||(s1[2]-'A'<3&&s2[2]-'A'<3))
	{
		return true;
	}
	return false;
}
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int c1,c2;
    cin >> c1 >> s1 >>c2 >> s2;
    if (c1==c2)
    {
    	cout << "1";
    	if (st(s1,s2))
	    {
		    cout << "1";
			if(str(s1,s2))
			{
				cout << "1"; 
				if (((s1[2]-'A')-(s2[2]-'A')==1)||((s2[2]-'A')-(s1[2]-'A')==1))
				{
					cout << "1";
				}
				else cout << "0";
			}
			else cout << "00";
		}
		else
		{
			cout << "000";
		}
	}
	else
	{
		cout << "0000";
	}
	
	return 0;	
} 
