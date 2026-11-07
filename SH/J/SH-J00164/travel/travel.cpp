#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int c1,c2;
string s1,s2;
bool j1=true,j2=true,j3=true,j4=true;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		j1=j2=j3=j4=false;
	}else{
		if(s1[0]!=s2[0]||s1[1]!=s2[1]){
			j2=j3=j4=false;
		}if(s1[2]=='A'&&s2[2]=='D') j3=j4=false;
		if(s1[2]=='A'&&s2[2]=='F') j3=j4=false;
		if(s1[2]=='B'&&s2[2]=='D') j3=j4=false;
		if(s1[2]=='B'&&s2[2]=='F') j3=j4=false;
		if(s1[2]=='C'&&s2[2]=='D') j3=j4=false;
		if(s1[2]=='C'&&s2[2]=='F') j3=j4=false;
		if(s1[2]=='D'&&s2[2]=='A') j3=j4=false;
		if(s1[2]=='D'&&s2[2]=='B') j3=j4=false;
		if(s1[2]=='D'&&s2[2]=='C') j3=j4=false;
		if(s1[2]=='F'&&s2[2]=='A') j3=j4=false;
		if(s1[2]=='F'&&s2[2]=='B') j3=j4=false;
		if(s1[2]=='F'&&s2[2]=='C') j3=j4=false;
		if(s1[2]=='A'&&s2[2]=='C') j4=false;
		if(s1[2]=='A'&&s2[2]=='A') j4=false;
		if(s1[2]=='B'&&s2[2]=='B') j4=false;
		if(s1[2]=='C'&&s2[2]=='A') j4=false;
		if(s1[2]=='C'&&s2[2]=='C') j4=false;
		if(s1[2]=='D'&&s2[2]=='D') j4=false;
		if(s1[2]=='F'&&s2[2]=='F') j4=false;
	}cout<<j1<<j2<<j3<<j4;
	return 0;
} 
