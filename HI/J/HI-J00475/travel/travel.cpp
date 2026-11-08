#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);

	string c1,s1,c2,s2;
	bool f=true;
	int ans=0;
	cin>>c1>>s1;
	cin>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
		f=false;
	}
	ans=0;
	int len2=s1.size()-1;
	int len4=s2.size()-1;
	int minlen1=min(len2,len4);
	for(int i=0;i<minlen1;i++)
	{
		if(f=false)
		{
			cout<<"000";
			break;
		}
		int s3=s1[i]-'0';
		int s4=s2[i]-'0';
		if(s3==s4)
		{
			ans++;
		}
	}
	if(ans>=2 && f==true)
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		f=false;
	}
	char s1back=s1.back();
	char s2back=s2.back();
	if(f==false)
	{
		cout<<"0";
		f=false;
	}
	else if(ans>=2)
	{
		if((s1back>='A' && s1back<='C')&&(s2back>='A' && s2back<='C'))
		{
			cout<<"1";
			ans++;
		}
		else
		{
			cout<<"0";
		}
		if(ans>=3)
		{
			if((s1back=='D' && s2back=='F') || (s2back=='D' && s1back=='F'))
			{
				cout<<"1";
			}
			else if((s1back=='A' && s2back=='C') || (s2back=='A' && s1back=='C'))
			{
				cout<<"0";
			}
			else
			{
				cout<<"1";
			}
		}
		else
		{
			cout<<"0";
		}
	}
	else
	{
		cout<<"00";
	}
	return 0;
}
