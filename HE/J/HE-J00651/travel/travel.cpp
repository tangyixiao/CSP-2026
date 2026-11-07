#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool p1,p2,p3,p4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)p1=1;
	else p1=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&p1==1)p2=1;
	else p2=0;
	if(p2==1&&(s1[2]=='A'&&s2[2]=='B'||s1[2]=='A'&&s2[2]=='C'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A'||s1[2]=='C'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'))p3=1;
	else p3=0;
	if(p3==1&&abs(s2[2]-s1[2])==1)p4=1;
	else p4=0;
	cout<<p1<<p2<<p3<<p4<<endl;
	return 0;
}
