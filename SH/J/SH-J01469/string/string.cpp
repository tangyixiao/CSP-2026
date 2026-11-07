#include<iostream>
using namespace std;

string s="",s1="";
string x(char ch,string ss)
{
	if(ch=='a')return ss+"a";
	if(ch=='b')return ss+"b";
	if(ch=='c')return ss+"c";
	if(ch=='d')return ss+"d";
	if(ch=='e')return ss+"e";
	if(ch=='f')return ss+"f";
	if(ch=='g')return ss+"g";
	if(ch=='h')return ss+"h";
	if(ch=='i')return ss+"i";
	if(ch=='j')return ss+"j";
	if(ch=='k')return ss+"k";
	if(ch=='l')return ss+"l";
	if(ch=='m')return ss+"m";
	if(ch=='n')return ss+"n";
	if(ch=='o')return ss+"o";
	if(ch=='p')return ss+"p";
	if(ch=='q')return ss+"q";
	if(ch=='r')return ss+"r";
	if(ch=='s')return ss+"s";
	if(ch=='t')return ss+"t";
	if(ch=='u')return ss+"u";
	if(ch=='v')return ss+"v";
	if(ch=='w')return ss+"w";
	if(ch=='x')return ss+"x";
	if(ch=='y')return ss+"y";
	if(ch=='z')return ss+"z";
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char ch;
		cin>>a>>ch;
		for(int j=1;j<=a;j++)
		{
			s=x(ch,s);
		}
	}
	long long cnt=0;
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-i+1])cnt++;
	}
	cout<<cnt;
	return 0;
}
