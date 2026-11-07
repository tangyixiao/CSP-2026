#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int f=0,f1=0,f2=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]) f=1,cout<<1;
	else cout<<0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&f==1) f1=1,cout<<1;
	else cout<<0;
	if((s1[2]<='C'&&s2[2]<='C'&&f1==1)||(s1[2]>='D'&&s2[2]>='D'&&f1==1)) f2=1,cout<<1;
	else cout<<0;
	if((s1[2]=='A'&&s2[2]=='B'&&f2==1)||(s1[2]=='B'&&s2[2]=='A'&&f2==1)||(s1[2]=='B'&&s2[2]=='C'&&f2==1)||(s1[2]=='C'&&s2[2]=='B'&&f2==1)||(s1[2]=='D'&&s2[2]=='F'&&f2==1)||(s1[2]=='F'&&s2[2]=='D'&&f2==1)) cout<<1;
	else cout<<0;
	return 0;
}