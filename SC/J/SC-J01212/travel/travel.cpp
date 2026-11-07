#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	string seat1,seat2;
	cin>>n>>seat1>>m>>seat2;
	if(n==m) cout<<1;
	else {cout<<"0000";return 0;}
	if(seat1[0]==seat2[0]&&seat1[1]==seat2[1]) cout<<1;
	else {cout<<"000";return 0;}
	int flag=0;
	char s1=seat1[2],s2=seat2[2];
	if((s1=='D'&&s2=='F')||(s1=='F'&&s2=='D')) {cout<<1;flag=1;}
	else if((s1=='B'&&s2!='D'&&s2!='F')||(s2=='B'&&s1!='D'&&s1!='F')) {cout<<1;flag=1;}
	else if(s1!='D'&&s1!='F'&&s2!='D'&&s2!='F') cout<<1;
	else {cout<<"00";return 0;}
	if(flag) cout<<1;
	else{
		if(s1=='D'||s1=='F'||s2=='D'||s2=='F') cout<<0;
		else if(s1!='B'&&s2!='B') cout<<0;
		else cout<<1;
	}
	return 0;
}