#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) printf("1");
	else {
		printf("0000");return 0;
	}
	if(s1[0]+s1[1]==s2[0]+s2[1]) printf("1");
	else {
		printf("000");return 0;
	}
	bool l_r1,l_r2;
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C') l_r1=0;
	else l_r1=1;
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C') l_r2=0;
	else l_r2=1;
	if(l_r1==l_r2) printf("1");
	else {
		printf("00");return 0;
	}
	if(abs((int)s1[2]-s2[2])==1 && !((s1[2] =='D' &&s2[2]=='C') || (s1[2]=='C' && s2[2]=='D'))) printf("1");
	else printf("0");
	return 0;
} 
