#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	char x=s2[2],y=s4[2];
	bool ok=false,ko=false;
	if(abs(x-y)==1||(x=='D'&&y=='F')||(x=='F'&&y=='D'))ok=true;
	if(x=='C'&&y=='D'||x=='D'&&y=='C')ok=false;
	if((x<='C'&&y<='C')||(x>='D')&&y>='D')ko=true;
	int a=0,b=0,c=0,d=0;
	if(s1==s3)a=1;
	if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1])b=1;
	if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&ko)c=1;
	if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&ko&&ok)d=1;
	cout<<a<<b<<c<<d<<endl;
	return 0;
}
