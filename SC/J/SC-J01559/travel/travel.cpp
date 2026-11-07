#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0] && c1[1]==c2[1])	cout<<1;
	else	cout<<0;
	if(c1[0]==c2[0] && c1[1]==c2[1] && s1[0]==s2[0] && s1[1]==s2[1])	cout<<1;
	else	cout<<0;
	if(c1[0]==c2[0] && c1[1]==c2[1] && s1[0]==s2[0] && s1[1]==s2[1] &&(s1[2]-'A'>=0 && s1[2]-'A'<=2 && s2[2]-'A'>=0 && s2[2]-'A'<=2 || s1[2]-'A'>=3 && s1[2]-'A'<=4 && s2[2]-'A'>=3 && s2[2]-'A'<=4))	cout<<1;
	else	cout<<0;
	if(c1[0]==c2[0] && c1[1]==c2[1] && s1[0]==s2[0] && s1[1]==s2[1] &&(s1[2]-'A'>=0 && s1[2]-'A'<=2 && s2[2]-'A'>=0 && s2[2]-'A'<=2 || s1[2]-'A'>=3 && s1[2]-'A'<=4 && s2[2]-'A'>=3 && s2[2]-'A'<=4)&& (s1[2]-s2[2]==1 || s2[2]-s1[2]==1))	cout<<1;
	else	cout<<0;
	//fclose(stdin);fclose(stdout);
	return 0;
}