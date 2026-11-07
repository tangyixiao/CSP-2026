#include<bits/stdc++.h>
using namespace std;
int a1,b1;
char a2[10],b2[10];
bool q1,q2,q3,q4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2[1]>>a2[2]>>a2[3]>>b1>>b2[1]>>b2[2]>>b2[3];
	if(a1==b1) q1=1;
	q2=(q1&&a2[1]==b2[1]&&a2[2]==b2[2])?1:0;
	if((a2[3]=='A'||a2[3]=='B'||a2[3]=='C')&&(b2[3]=='A'||b2[3]=='B'||b2[3]=='C')) q3=q2?1:0;
	if((a2[3]=='D'||a2[3]=='F')&&(b2[3]=='D'||b2[3]=='F')) q3=q2?1:0;
	if(a2[3]=='A'&&b2[3]=='B'||a2[3]=='B'&&(b2[3]=='A'||b2[3]=='C')||a2[3]=='C'&&a2[3]=='B'||a2[3]=='D'&&b2[3]=='F'||a2[3]=='F'&&b2[3]=='D') q4=q3?1:0;
	if(q1) cout<<1;
	else  cout<<0;
	if(q2) cout<<1;
	else  cout<<0;
	if(q3) cout<<1;
	else  cout<<0;
	if(q4) cout<<1;
	else  cout<<0;
	return 0;
}
