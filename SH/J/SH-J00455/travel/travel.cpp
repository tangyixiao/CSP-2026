#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1[0]!=s3[0]||s1[1]!=s3[1]){
		cout<<"0000";
		return 0;
	}
	if(s2[0]!=s4[0]||s2[1]!=s4[1]){
		cout<<"1000";
		return 0;
	}
	char a=s2[2];
	char b=s4[2];
	if((a=='A'&&b=='B')||(a=='B'&&b=='A')||
	   (a=='C'&&b=='A')||(a=='A'&&b=='C')||(a=='D'&&b=='F')||
	   (a=='B'&&b=='C')||(a=='C'&&b=='B')||(a=='F'&&b=='D')){
		if((a=='A'&&b=='B')||(a=='B'&&b=='A')||
		   (a=='C'&&b=='D')||(a=='D'&&b=='C')||
		   (a=='D'&&b=='F')||(a=='F'&&b=='D')){
		   	cout<<"1111";
		}else{
			cout<<"1110";
		}
	}else{
		cout<<"1100";
	}
	return 0;
}
