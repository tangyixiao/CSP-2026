#include<bits/stdc++.h>
using namespace std;


int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool a=0,b=0,c=0,d=0;
	if(c1==c2)
	{
		a=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			b=1;
			if(('A'<=s1[2]&&s1[2]<='C'&&'A'<=s2[2]&&s2[2]<='C')||('D'<=s1[2]&&s1[2]<='F'&&'D'<=s2[2]&&s2[2]<='F'))
			{
				c=1;
				if(s1[0]==s2[0]&&s1[1]==s2[1]&&(max(s1[2],s2[2])-min(s1[2],s2[2])==1))
				{
					d=1;
				}
			}

		}

	}

	cout << a << b << c << d;
	return 0;
}
