#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
char s12,s22;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long s11,s21;
	cin>>c1>>s1>>c2>>s2;
	s11=(s1[0]-'0')*10+(s1[1]-'0');
	s12=s1[2];
	s21=(s2[0]-'0')*10+(s2[1]-'0');
	s22=s2[2];
	if(c1!=c2)
		cout<<"0000";
	else if(s11!=s21)
		cout<<"1000";
	else if(s12<='C' && s22>'C' || s12>='D' && s22<'D')
		cout<<"1100";
	else if(s12=='A' && s22=='B' || s12=='B' && s22=='C' || s12=='D' && s22=='F' || s22=='A' && s12=='B' || s22=='B' && s12=='C' || s22=='D' && s12=='F')
		cout<<"1111";
	else
		cout<<"1110";
	return 0;
}