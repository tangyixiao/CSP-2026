#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool che;
	bool pai;
	bool tong;
	bool ling;
	if(c1==c2)
		che=true;
	else che=false;
	if(s1[0]==s2[0] && s1[1]==s2[1] && c1==c2)
		pai=true;
	else pai=false;
	if(s1[0]==s2[0] && s1[1]==s2[1] && c1==c2){
		if((s1[2]=='A' || s1[2]=='B' || s1[2]=='C') && (s2[2]=='A' || s2[2]=='B' ||	s2[2]=='C'))tong=true;
		if((s1[2]=='D' || s1[2]=='F') && (s2[2]=='D' || s2[2]=='F'))tong=true;
	}
	else tong=false;
	if(s1[0]==s2[0] && s1[1]==s2[1] && c1==c2){
		if(char(s1[2]+1==s2[2] || s1[2]-1==s2[2] || s1[2]==s2[2]+1 || s1[2]==s2[2]-1))
			ling=true;
	}
	else ling=false;
	cout<<che<<pai<<tong<<ling;
	return 0;
} 