#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int w1,w2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[5];
	a[0]='A';
	a[1]='B';
	a[2]='C';
	a[3]='D';
	a[4]='E';
	int b[5];
	b[0]=1;
	b[1]=1;
	b[2]=1;
	b[3]=2;
	b[4]=2;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<5;i++)
	{
		if(s1[2]==a[i])
		{
			w1=b[i];
		}
		if(s2[2]==a[i])
		{
			w2=b[i];
		}
	}
	if(c1==c2)
	{
		cout<<1;
		if((s1[0]==s2[0])&&(s1[1]==s2[1]))
		{
			cout<<1;
			if(w1==w2)
			{
				cout<<1;
				if(w1==2)
				{
					cout<<1;
				}	
				else if((s1[2]=='B')||(s2[2]=='B'))
				{
					cout<<1;
				}
				else
				{
					cout<<0;
				}
			}
			else
			{
				cout<<0;
				cout<<0;
			}
		}
		else
		{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}
	else
	{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}
