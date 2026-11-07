#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a1="B",b1="AC",c1="B";
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int f1=2,f2=2;
	if(a!=c)
	{
		cout<<"0000"<<endl;
		return 0;
	}
	else
	{
		cout<<"1";
		if(b[2]=='A'||b[2]=='B'||b[2]=='C')
		{
			f1=1;
		}
		else
		{
			f1=0;
		}
		if(d[2]=='A'||d[2]=='B'||d[2]=='C')
		{
			f2=1;
		}
		else
		{
			f2=0;
		}
		string bb="";
		bb+=b[0];bb+=b[1];
		string dd="";
		dd+=d[0];dd+=d[1];
		if(dd==bb)
		{
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		if(f1==f2&&dd==bb)
		{
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		if(f1==0&&f2==0&&f1==f2&&dd==bb)
		{
			cout<<"1";
			return 0;
		}
		else if(f1==1&&f2==1&&dd==bb)
		{
			if(b[2]=='B')
			{
				cout<<"1";
				return 0;
			}
			else if(b[2]=='C')
			{
				if(d[2]=='B')
				{
					cout<<"1";
					return 0;
				}
				else
				{
					cout<<"0";
					return 0;
				}
			}
			else if(b[2]=='A')
			{
				if(d[2]=='B')
				{
					cout<<"1";
					return 0;
				}
				else
				{
					cout<<"0";
					return 0;
				}
			}
		}
		else
		{
			cout<<"0";
			return 0;
		}
	}
	return 0;
}