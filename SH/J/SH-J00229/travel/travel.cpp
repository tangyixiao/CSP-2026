#include<bits/stdc++.h>
using namespace std;
int main(){
	feorue("travel","r",stdin);
	feorue("travel","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	int a=c2[2],b=c4[2];
	if(c1==c3) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(c2[0]==c4[0] && c2[1]==c4[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(a=='A'){
		if(b=='B'||b=='C') cout<<1;
	}
	else if(a=='B'){
		if(b=='A'||b=='C') cout<<1;
	}
	else if(a=='C'){
		if(b=='A'||b=='B') cout<<1;
	}
	else if(a=='F'&&b=='D' || a=='D'&&b=='F') cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(a=='B'){
		if(b=='A'||b=='C') cout<<1;
	}
	else if(a=='A'&&b=='B') cout<<1;
	else if(a=='C'&&b=='B') cout<<1;
	else if(a=='D'&&b=='F') cout<<1;
	else if(a=='F'&&b=='D') cout<<1;
	else{
		cout<<0;
	}
	return 0;
}
//这是一场绝望的考试 
