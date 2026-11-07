#include<bits/stdc++.h>
#define int long long
using namespace std;
ifstream fin("travel.in");
ofstream fout("travel.out");
string s1,s2,s3,s4;
int p,pp;
signed main(){
	ios::sync_with_stdio(0),fin.tie(0),fout.tie(0);
	fin>>s1>>s2>>s3>>s4;
	if(s1==s3)fout<<1;
	else fout<<0;
	if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1])fout<<1;
	else fout<<0;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')p=1;
	else p=0;
	if(s4[2]=='A'||s4[2]=='B'||s4[2]=='C')pp=1;
	else pp=0;
	if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&p==pp)fout<<1;
	else fout<<0;
	if(p==pp==1){
		if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&abs(s2[2]-s4[2])==1)fout<<1;
		else fout<<0;
	}else{
		if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&abs(s2[2]-s4[2])==2)fout<<1;
		else fout<<0;
	}
	return 0;
}