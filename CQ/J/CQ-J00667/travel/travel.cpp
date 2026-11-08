#include <bits/stdc++.h>
using namespace std;
string co,so,ct,st;
int main(){
	freopen ("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
	cin>>co>>so>>ct>>st;
	if(co[0]==ct[0]&&co[1]==ct[1]){
		cout<<1;
	}else{
		cout<<0000;
		return 0;
	}
	if(so[0]==st[0]&&so[1]==st[1]){
		cout<<1;
	}else{
		cout<<000;
		return 0;
	}
	if((so[2]<='C'&&st[2]<='C'&&so[2]>='A'&&st[2]>='A')||(so[2]=='D'&&st[2]=='F')||(st[2]=='D'&&so[2]=='F')){
		cout<<1;
	}else{
		cout<<00;
		return 0;
	}
	if((so[2]=='D'&&st[2]=='F')||(st[2]=='D'&&so[2]=='F')||(st[2]=='A'&&so[2]=='B')||(st[2]=='B'&&so[2]=='C')||(st[2]=='B'&&so[2]=='A')||(st[2]=='D'&&so[2]=='C')){
		cout<<1;
	}else{
		cout<<0;
		return 0;
	}
	return 0;
}  
