#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool cx=c1==c2;
	bool pai=cx&&s1[0]+s1[1]==s2[0]+s2[1];
	bool ce=pai&&(((s1[2]=='A'&&(s2[2]=='B'||s2[2]=='C'))||(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C'))||(s1[2]=='C'&&(s2[2]=='B'||s2[2]=='A'))||(s1[2]=='F'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='F')));
	bool xl=ce&&((s1[2]!='F'&&s1[2]-1==s2[2])||(s2[2]!='F'&&s2[2]-1==s1[2])||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'));
	cout<<cx;
	cout<<pai;
	cout<<ce;
	cout<<xl;
	return 0;
}