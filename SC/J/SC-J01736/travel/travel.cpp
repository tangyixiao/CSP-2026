#include<bits/stdc++.h>
using namespace std;

int a[27];
int c[27];
char s[27];

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++)
	{
		cin >> a[i] >> c[i] >> s[i] ;
	}
	if (a[1]<1||a[1]>17)
	{
		cout << "0000" ;
	}
	else if (a[2]<1||a[2]>17)
	{
		cout << "0000" ;
	}
	else
	{
		if (a[1]==a[2])
		{
			cout << 1 ;
			if (c[1]<1||c[1]>18)
			{
				cout << "000" ;
			}
			else if (c[2]<1||c[2]>18)
			{
				cout << "000" ;
			}
			else if (c[1]==c[2]&&s[1]==s[2])
			{
				cout << "110" ;
			}
			else 
			{
				if (c[1]==c[2])
				{
					cout << 1 ;
					if (s[1]!='A'&&s[1]!='B'&&s[1]!='C'&&s[1]!='D'&&s[1]!='F')
					{
						cout << "00" ;
					}
					else if (s[2]!='A'&&s[2]!='B'&&s[2]!='C'&&s[2]!='D'&&s[2]!='F')
					{
						cout << "00" ;
					}
					else
					{
						if (s[1]=='A'||s[1]=='B'||s[1]=='C')
						{
							if(s[2]=='A'||s[2]=='B'||s[2]=='C')
							{
								cout << 1 ;
								if(s[1]=='A'&&s[2]=='C')
								{
									cout << 0 ;
								}
								else if(s[2]=='A'&&s[1]=='C')
								{
									cout << 0 ;
								}
								else
								{
									cout << 1 ;
								}
							}
							else
							{
								cout << "00" ;
							}
						}
						else
						{
							if(s[2]=='D'||s[2]=='F')
							{
								cout << "11" ;
							}
							else
							{
								cout << "00" ;
							}
						}
					}
					
				}
				else
				{
					cout << "000";
				}
			}
		}
		else
		{
			cout << "0000" ;
		}
	}
	return 0;
}