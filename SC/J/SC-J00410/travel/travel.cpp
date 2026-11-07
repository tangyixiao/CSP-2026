#include<bits/stdc++.h> 
using namespace std;
char s1,s3;
char s4,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,c3,c4;
	cin >> s1 >> s2 >> s3 >> s4;
	if(s1-s3==0)
	{
		c1 = 1;
	}
	else
	{
		c1 = 0;
	}
	if(s2-1==s4||s2+1==s4)
	{
		c2=1;
		if(s2+1=='D'+1-1|| s2-1=='C'+1-1)
		{
			c3=1;
			
		}
		else
		{
			c3=0;
		}
	}
	else
	{
		c2=0;
		
	}
	if(s2-1==s4||s2+1==s4)
	{
		c4=1;
	}
	else
	{
		c4=0;
	}
	cout << c1 << c2 << c3 << c4;
	return 0;
}
