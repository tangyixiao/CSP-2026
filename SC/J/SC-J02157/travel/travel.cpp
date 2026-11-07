#include<bits/stdc++.h>
using namespace std;
string r,rz,x,xz;//FD ABC
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>rz>>x>>xz;
	bool a=0,b=0,c=0;
	if(r[1]==x[1]&&r[0]==x[0]){
	cout<<"1";
	a=1;
	}
	else cout<<"0";
	if(rz[1]==xz[1]&&rz[0]==xz[0]&&a){
	cout<<"1";
	b=1;
	}
	else cout<<"0";
	if((a&&b)&&((rz[2]=='F'&&xz[2]=='D')||(rz[2]=='D'&&xz[2]=='F')||(rz[2]=='A'&&xz[2]=='B')||(rz[2]=='A'&&xz[2]=='C')||(rz[2]=='B'&&xz[2]=='A')||(rz[2]=='B'&&xz[2]=='C')||(rz[2]=='C'&&xz[2]=='A')||(rz[2]=='C'&&xz[2]=='B'))){
	cout<<"1";
	c=1;
	}
	else cout<<"0";
	if((a&&b&&c)&&((rz[2]=='F'&&xz[2]=='D')||(rz[2]=='D'&&xz[2]=='F')||(rz[2]=='A'&&xz[2]=='B')||(rz[2]=='B'&&xz[2]=='C')||(rz[2]=='B'&&xz[2]=='A')||(rz[2]=='C'&&xz[2]=='B')))
	cout<<"1";
	else cout<<"0";
	return 0;
} 