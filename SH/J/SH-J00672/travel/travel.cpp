#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a=0;
int b=0;
int c=0;
int d=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2)
	{
		a=1;
		if (s1[0]==s2[0]&&s1[1]==s2[1])
		{
			b=1;
			int x=s1[2]-'0';
			int y=s2[2]-'0'; 
			if ((x<=19&&y<=19)||(x>19&&y>19))
			{
				c=1;
				if (x-y==1||x-y==-1)
				{
					d=1;
				}
			}
		}
	}
	cout<<a<<b<<c<<d<<endl;
	return 0;
}
