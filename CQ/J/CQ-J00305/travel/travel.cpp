#include <bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>s>>s1>>s2>>s3;
	if(s==s2)
	{
		cout<<1;
		if(s1[0]==s3[0]&&s1[1]==s3[1])
		{
			cout<<1;
			if((s1[2]=='A'&&(s3[2]=='B'||s3[2]=='C'))||(s1[2]=='B'&&(s3[2]=='A'||s3[2]=='C'))||(s1[2]=='C'&&(s3[2]=='A'||s3[2]=='B'))||(s1[2]=='D'&&s3[2]=='F')||(s1[2]=='F'&&s3[2]=='D'))
			{
				cout<<1;
				if(abs(int(s1[2])-int(s3[2]))==1)
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
				cout<<"00";
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
	return 0;
}
