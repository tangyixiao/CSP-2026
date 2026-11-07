#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	for(int i=0;i<b.size();i++)
	{
		if(b[i]==d[i]&&b[i+1]==d[i+1])
		{
			cout<<"1";
		}
		else
		{
			cout<<"000";
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
		if(b[i+2]=='A')
		{
			if(d[i+2]=='B')
			{
				cout<<"11";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else if(d[i+2]=='C')
			{
				cout<<"10";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else
			{
				cout<<"00";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
		else if(b[i+2]=='B')
		{
			if(d[i+2]=='A'||d[i+2]=='C')
			{
				cout<<"11";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else
			{
				cout<<"00";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
		if(b[i+2]=='C')
		{
			if(d[i+2]=='B')
			{
				cout<<"11";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else if(d[i+2]=='A')
			{
				cout<<"10";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else
			{
				cout<<"00";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
		if(b[i+2]=='D')
		{
			if(d[i+2]=='F')
			{
				cout<<"11";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else
			{
				cout<<"00";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
		if(b[i+2]=='F')
		{
			if(d[i+2]=='D')
			{
				cout<<"11";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else
			{
				cout<<"00";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
