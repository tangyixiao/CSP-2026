#include<bits/stdc++.h>
using namespace std;
string cl,cr,sl,sr;
bool check(){
	if((sl[2]=='A'||sl[2]=='B'||sl[2]=='C')&&(sr[2]=='A'||sr[2]=='B'||sr[2]=='C')){
		return 1;
	}
	if((sl[2]=='D'||sl[2]=='F')&&(sr[2]=='D'||sr[2]=='F')){
		return 1;
	}
	return 0;
}
bool judge(){
	char a=sl[2],b=sr[2];
	if((a=='A'&&b=='B')||(a=='B'&&b=='A')){
		return 1;
	}
	if((a=='B'&&b=='C')||(a=='C'&&b=='B')){
		return 1;
	}
	if((a=='D'&&b=='F')||(a=='F'&&b=='D')){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cl>>sl>>cr>>sr;
	if(cl==cr){
		cout<<1;
		if(sl[0]==sr[0]&&sl[1]==sr[1]){
			cout<<1;
			if(check()){
				cout<<1;
				if(judge()){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}