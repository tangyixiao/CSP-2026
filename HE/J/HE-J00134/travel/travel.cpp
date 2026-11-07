#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f1=0,f2=0,f3=0,f4=0;
map<char,int>mp;
int st1=0,st2=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	mp['A']=1;
	mp['B']=1;
	mp['C']=1;
	mp['D']=2;
	mp['E']=2;
	cin>>c1>>s1>>c2>>s2;
	st1=(s1[0]-'0')*10+s1[1]-'0';
	st2=(s2[0]-'0')*10+s2[1]-'0';
	if(c1==c2) f1=1;
	if(f1&&s1[0]==s2[0]&&s1[1]==s2[1]) f2=1;
	if(f2&&mp[s1[2]]==mp[s2[2]]) f3=1;
	if(f1&&mp[s1[2]]==mp[s2[2]]&&((s1[2]==s2[2]&&abs(st1-st2)==1)||(st1==st2&&abs(s1[2]-s2[2])==1))) f4=1;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
