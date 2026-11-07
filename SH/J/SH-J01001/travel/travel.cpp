#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int n1,n2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='A')n1=1;
	else if(s1[2]=='B')n1=2;
	else if(s1[2]=='C')n1=3;
	else if(s1[2]=='D')n1=5;
	else if(s1[2]=='F')n1=6;
	if(s2[2]=='A')n2=1;
	else if(s2[2]=='B')n2=2;
	else if(s2[2]=='C')n2=3;
	else if(s2[2]=='D')n2=5;
	else if(s2[2]=='F')n2=6;
	bool f1=0,f2=0,f3=0,f4=0;
	if(c1==c2)f1=1;
	if(f1&&s1[0]==s2[0]&&s1[1]==s2[1])f2=1;
	if(f2&&((n1<4&&n2<4)||n1>4&&n2>4))f3=1;
	if(f3&&((n1-n2==1)||(n2-n1==1)))f4=1;
	cout<<f1<<f2<<f3<<f4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
