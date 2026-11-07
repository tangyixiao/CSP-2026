#include<bits/stdc++.h>
using namespace std;
int f1,f2,f3,f4;
int c[]={1,1,1,0,0};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s2[2]=='F') s2[2]='E';
	if(s4[2]=='F') s4[2]='E';
	if(s1[0]==s3[0]&&s1[1]==s3[1]) f1=1;
	if(f1&&s2[0]==s4[0]&&s2[1]==s4[1]) f2=1;
	if(f2&&c[s2[2]-'A']==c[s4[2]-'A']) f3=1;
	if(f3&&abs(s2[2]-s4[2])==1) f4=1;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}