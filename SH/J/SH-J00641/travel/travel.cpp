#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string c1,s1,c2,s2;
	cin>>c1>>c2>>s1>>s2;
	if(c1==s1)
	{
		cout<<'1';
	}
	else
	{
		cout<<0;
	}
	if(c1==s1&&c2[0]==s2[0]&&c2[1]==s2[1])
	{
		cout<<'1';
	}
	else
	{
		cout<<0;
	}
	bool f_c2,f_s2;
	f_c2=c2[2]=='A'||c2[2]=='B'||c2[2]=='C';
	f_s2=s2[2]=='A'||s2[2]=='B'||s2[2]=='C';
	if(c1==s1&&c2[0]==s2[0]&&c2[1]==s2[1]&&(f_c2==f_s2))
	{
		cout<<'1';
	}
	else cout<<0;
	if(c1==s1&&c2[0]==s2[0]&&c2[1]==s2[1]&&(f_c2==f_s2)&&(c2[2]==(s2[2]+1)||s2[2]==(c2[2]+1)))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
}
