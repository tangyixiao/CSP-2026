#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ss1,ss2;
bool b1,b2,b3,b4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]>='A'&&s1[2]<='C') ss1=1;
	else ss1=0;
	if(s2[2]>='A'&&s2[2]<='C') ss2=1;
	else ss2=0;
	if(c1==c2){
		b1=1;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&b1){
		b2=1;
	}
	if(ss1==ss2&&b2){
		b3=1;
	}
	if((s1[2]+1==s2[2]||s1[2]-1==s2[2])&&b3){
		b4=1;
	}
	if(((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F'))&&b3){
		b4=1;
	}
	cout<<b1<<b2<<b3<<b4;
}
//02 01F 02 01D
