#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	bool a1=false,a2=false,a3=false,a4=false;
	if(s1==s3)a1=true;
	if(a1&&(s2[0]==s4[0])&&(s2[1]==s4[1]))a2=true;
	if(a2&&(s2[2]-'D'<0)xor(s4[2]-'D'>=0))a3=true;
	if(a3&&((s2[2]+s4[2]=='A'+'B')||(s2[2]+s4[2]=='B'+'C')||(s2[2]+s4[2]=='D'+'F')))a4=true;
	cout<<(int)a1<<(int)a2<<(int)a3<<(int)a4<<'\n';
	return 0;
}
