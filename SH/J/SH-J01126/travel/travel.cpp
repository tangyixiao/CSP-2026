#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;//15min
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	int x=0,y=0;
	char a=s1[2],b=s2[2];
	x=int(s1[0]-'0')*10+int(s1[1]-'0');
	y=int(s2[0]-'0')*10+int(s2[1]-'0');
	if(x==y){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if(a>b) swap(a,b);
	if(a=='D'&&b=='F'||a=='B'&&b=='C'||a=='A'&&b=='C'||a=='A'&&b=='B'){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if(a=='D'&&b=='F'||a=='B'&&b=='C'||a=='A'&&b=='B') cout<<"1";
	else cout<<"0";
	return 0;
}
