#include<bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e6+10;
string c1,s1,c2,s2;
bool f1,f2,f3;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdin);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2 && s1==s2)
	{
		cout<<"0000";
		return 0;
	}
	
	if(c1[0]==c2[0] && c1[1]==c2[1]) 
	{
		cout<<"1";
		f1=1;
	}
	else cout<<"0";
	
	if(s1[0]==s2[0] && s1[1]==s2[1] && f1) 
	{
		cout<<"1";
		f2=1;
	}
	else cout<<"0";
	
	if(f1 && f2 && ( ( s1[2]-'A'+1 <=3 && s2[2]-'A'+1<=3) || ( s1[2]-'A'+1 >3 && s2[2]-'A'+1>3 ) ) )
	{
		cout<<"1";
		f3=1;
	} 
	else cout<<"0";
	
	if(f3 && ( (s1[2]-'A'+1==s2[2]-'A') || (s1[2]-'A'+1==s2[2]-'A'+2) ) ) cout<<"1";
	else cout<<"0";
	return 0;
} 