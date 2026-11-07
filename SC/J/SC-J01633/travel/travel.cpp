#include<bits/stdc++.h> 
#include<cstdio>
using namespace std;
string a1,a2,b1,b2;
bool ok[6];
int main(){
	ok[0]=1;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	
	if(a1==b1)ok[1]=1;                                                                                      //子任务1 
	
	if(a2[0]==b2[0]&&a2[1]==b2[1])ok[2]=1;                                                                  //子任务2
	
	if(((b2[2]=='A'||b2[2]=='B')||(b2[2]=='C'))&&((a2[2]=='A'||a2[2]=='B')||(a2[2]=='C')))ok[3]=1;          //子任务3
	else if((a2[2]=='D'||a2[2]=='F')&&(b2[2]=='D'||b2[2]=='F'))ok[3]=1;
	
	if(a2[2]=='A'&&b2[2]=='B'||(a2[2]=='B'&&b2[2]=='A'))ok[4]=1;
	else if(a2[2]=='C'&&b2[2]=='B'||(a2[2]=='B'&&b2[2]=='C'))ok[4]=1;                                       //子任务4
	else if(a2[2]=='D'&&b2[2]=='F'||(a2[2]=='F'&&b2[2]=='D'))ok[4]=1;
	
cout<<ok[1];
if(ok[1]==0)ok[2]=0;
cout<<ok[2];
if(ok[2]==0)ok[3]=0;
cout<<ok[3];
if(ok[3]==0)ok[4]=0;
cout<<ok[4];
	return 0;
}