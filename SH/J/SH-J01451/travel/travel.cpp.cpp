#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool question1(string c1,string c2){
	if(c1==c2)return true;
	else return false;
}
bool question2(string s1,string s2){
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&s1!=s2)return true;
	else return false;
}
bool question3(string s1,string s2){
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&s1!=s2&&(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D'))return true;
	else return false;
}
bool question4(string c1,string s1,string c2,string s2){
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')))return true;
	else return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(question1(c1,c2))cout<<"1";
	else cout<<"0";
	if(question2(s1,s2))cout<<"1";
	else cout<<"0";
	if(question3(s1,s2))cout<<"1";
	else cout<<"0";
	if(question4(c1,s1,c2,s2))cout<<"1";
	else cout<<"0"; 
	return 0;
}
