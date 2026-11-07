#include<bits/stdc++.h>
using namespace std;

int main()
{
	string c1,s1,c2,s2;
	scanf("travel.in",c1,s1,c2,s2)
	if(c1==c2) printf("travel.out",1)
	else printf("travel.out",0)
	if(s1[0]==s2[0]&&s1[1]==s2[1]) printf("travel.out",1)
	else printf("travel.out",0)
	if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='C'&&s2[2]>='C')) printf("travel.out",1)
	else printf("travel.out",0)
	if(((s[2]+1)==s2[2]&&s2[2]!='D')||((s[2]-1)==s2[2])&&s1!='D') printf("travel.out",1)
	else printf("travel.out",0)
	return 0;
}