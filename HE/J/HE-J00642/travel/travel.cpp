#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int cxh1,cxh2;
int f1,f2,f3,f4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cxh1=(c1[0]-'0')*10+(c1[1]-'0');
	cxh2=(c2[0]-'0')*10+(c2[1]-'0');
	if(cxh1==cxh2) f1=1;
	if((s1[0]==s2[0])&&(s1[1]==s2[1])&&(f1==1)) f2=1;
	if(((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'))&&(f2==1)) f3=1;
	if(abs((s1[2]-'A')-(s2[2]-'A'))==1&&f3==1) f4=1;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
