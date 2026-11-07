#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1;
	char s1[3];
	int c2;
	char s2[3];
	cin>>c1;
//	cout<<c1<<" ";
	for(int i=0;i<3;i++)
	{
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=0;i<3;i++)
	{
		cin>>s2[i];
	}
//	cout<<s2<<" ";
	if(c1==c2)
	{
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<"1";
			if(('A'<=s1[2]&&'A'<=s2[2]&&s1[2]<='C'&&s2[2]<='C')||('D'<=s1[2]&&'D'<=s2[2]&&s1[2]<='F'&&s2[2]<='F'))
			{
				cout<<"1";
				if(s1[2]+1==s2[2]||s1[2]-1==s2[2])
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
			else{
				for(int i=0;i<2;i++)
				{
					cout<<"0";
				}
			}
		}
		else{
			for(int i=0;i<3;i++)
			{
				cout<<"0";
			}
		}
	}
	else{
		for(int i=0;i<4;i++)
		{
			cout<<"0";
		}
	}
	return 0;
}