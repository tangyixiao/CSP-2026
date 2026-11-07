#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool pd(char a,char b){
	if(a>='A'&&a<='C'&&b>='A'&&b<='C')return 1;
	if(a>='D'&&a<='E'&&b>='D'&&b<='E')return 1;
	return 0;
}
bool p(char a,char b){
	if(a=='A'&&b=='B')return 1;
	if(a=='B'&&b=='C')return 1;
	if(a=='B'&&b=='A')return 1;
	if(a=='C'&&b=='B')return 1;
	if(a=='D'&&b=='E')return 1;
	if(a=='E'&&b=='D')return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3)cout<<"0000";
	else if(s2[0]!=s4[0]||s2[1]!=s4[1])cout<<"1000";
	else if(!pd(s2[2],s4[2]))cout<<"1100";
	else if(!p(s2[2],s4[2]))cout<<"1110";
	else cout<<"1111";
	cout<<endl;
	return 0;
}