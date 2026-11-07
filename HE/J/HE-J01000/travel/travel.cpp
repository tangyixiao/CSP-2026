#include<bits/stdc++.h>
using namespace std;
string c,cc,s,ss;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c >> s >> cc >> ss;
	for(int i=0;i<2;i++)
	{
		if(c[i]!=cc[i])
		{
			cout << "0000";
			return 0;
		}
	}
	for(int i=0;i<2;i++)
	{
		if(s[i]!=ss[i])
		{
			cout << "1000";
			return 0;
		}
	}
	if(!((s[2]>='A'&&s[2]<='c')&&(ss[2]>='A'&&ss[2]<='C'))||((s[2]>='D'&&s[2]<='F')&&(ss[2]>='D'&&ss[2]<='F')))
	{
		cout << "1100";
		return 0;
	}
	if(abs(s[2]-ss[2])!=1)
	{
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}
