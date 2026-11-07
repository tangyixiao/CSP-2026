#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1;
	string s1;
	string c2;
	string s2;
	string corret;
	cin>>c1>>s1>>c2>>s2;	
	if(c1[0]==c1[0]&&c1[1]==c2[1]) corret[0]='1';
	else corret[0]='0';
	if(c1[0]==c1[0]&&c1[1]==c2[1]&&s1[0]==s2[0]&&s1[1]==s2[1]) corret[1]='1';
	else corret[1]='0';
	if(c1[0]==c1[0]&&c1[1]==c2[1]&&s1[0]==s2[0]&&s1[1]==s2[1]&&abs(s1[2]-s2[2])<=2&&s1[2]!='C'&&s1[2]!='D'&&s2[2]!='D'&&s2[2]!='C') corret[2]='1';
	else corret[2]='0';
	if(c1[0]==c1[0]&&c1[1]==c2[1]&&s1[0]==s2[0]&&s1[1]==s2[1]&&abs(s1[2]-s2[2])==1&&s1[2]!='C'&&s1[2]!='D'&&s2[2]!='D'&&s2[2]!='C') corret[3]='1';
	else corret[3]='0';
	cout<<corret[0]<<corret[1]<<corret[2]<<corret[3];	
	return 0;
}
