#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	char a1,a2,a3,a4;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) a1='1';
	else a1='0';
	if(a1=='1' and (s1[0]==s2[0] and s1[1]==s2[1])) a2='1';
	else a2='0';
	if(a2=='1' and (s1[2]=='A' and s2[2]=='B' or s1[2]=='B' and s2[2]=='C' or s1[2]=='A' and s2[2]=='C' or s1[2]=='B' and s2[2]=='A' or s1[2]=='C' and s2[2]=='B' or s1[2]=='C' and s2[2]=='A' or s1[2]=='D' and s2[2]=='F' or s1[2]=='F' and s2[2]=='D')) a3='1';
	else a3='0';
	if(a2=='1' and (s1[2]=='A' and s2[2]=='B' or s1[2]=='B' and s2[2]=='A' or s1[2]=='B' and s2[2]=='C' or s1[2]=='C' and s2[2]=='B' or s1[2]=='D' and s2[2]=='F' or s1[2]=='F' and s2[2]=='D')) a4='1';
	else a4='0';
	cout<<a1<<a2<<a3<<a4;
	return 0; 
}
