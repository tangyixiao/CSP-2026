#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel/1.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a;	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string b;
	string c="0";
	string d="0";
	string s="ABCDE";
	if(c1==c2)
	{
		a="1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			b="1";
		}
		else if(s1[0]!=s2[0]||s1[1]!=s2[1])
		{
			b="0";
		}
		if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C'||s2[2]=='A'||s2[2]=='B'||s2[2]=='C')||(s1[2]=='D'||s1[2]=='E'||s2[2]=='D'||s2[2]=='E'))
		{
			string c="1";
			if(s2[3]+1==s1[3]||s2[3]-1==s1[3])
			{
				string d="1";	
			}
		}
		string n=a+b+c+d;
		cout<<n;
	}
	else if(c1!=c2)
	{
		a="0";
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}