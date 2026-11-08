#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s[5];
	for(int i=1;i<=4;i++)
	{
		cin>>s[i];
	}
	if(s[1]==s[3])
	{
		cout<<1;
		string s1,s2;
		s1=s[2][0]+s[2][1];
		s2=s[4][0]+s[4][1];
		if(s1==s2)
		{
			cout<<"1";
			s1=s[2][2];
			s2=s[4][2];
			if(s1>="A"&&s1<="C"&&s2>="A"&&s2<="C")
			{
				cout<<1;
				if((s1=="A"||s1=="C")&&(s2=="A"||s2=="C"))
				{
					cout<<0<<"\n";
				}
				else
				{
					cout<<1<<"\n";
				}
			}
			else if(s1>="D"&&s1<="F"&&s2>="D"&&s2<="F")
			{
				cout<<"11\n";
			}
			else
			{
				cout<<"00\n";
			}
		}
		else
		{
			cout<<"000\n";
		}
	}
	else
	{
		cout<<"0000\n";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
