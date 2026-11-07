#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	int e = 0 , a = 0 , b = 0 , c = 0;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2&&c1!="01"&&c1!="16"&&c2!="01"&&c2!="16")
	{
		cout << "1";
		c=1;
	}
	else
	{
		cout << "0";
	}
	if(c==1&&s1[0]==s2[0]&&s1[1]==s2[1])
	{
		cout << "1";
		e = 1;
	}
	else
	{
		cout << "0";
	}
	if(e==1&&(((s1[2]<='C'&&s1[2]>='A')&&(s2[2]<='C'&&s2[2]>='A')&&s2[2]!=s1[2])||((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))))
	{
		cout << "1";
		a = 1;
		if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))
		{
			b = 1;
		}
	}
	else
	{
		cout << "0";
	}
	if(b==1)
	{
		cout << "1";
	}
	else
	{
		if(a==1&&abs(int(s1[2])-int(s2[2]))==1)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	return 0;
}