#include <iostream>
using namespace std;
int a[2];
string s,ss;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0;i<2;i++)
	{
		cin>>a[i];
		if(i==0)
		{
			cin>>s;
		}
		else
		{
			cin>>ss;
		}
	}

		if(a[0]==a[1])
	{
		cout<<1;
			if(s[0]==ss[0]&&s[1]==ss[1])
		{
			cout<<1;
				if((s[2]=='C'&&ss[2]=='D')||(s[2]=='D'&&ss[2]=='C'))
			{
				cout<<"00";
			}
			else
			{
				cout<<1;
				if((s[2]-'0'+1==ss[2]-'0')||(ss[2]-'0'+1==s[2]-'0'))
				{
					cout<<1;
				}
				else
				{
					cout<<0;
				}
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}

}