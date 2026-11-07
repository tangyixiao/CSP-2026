#include <bits/stdc++.h>
using namespace std;
bool ty(char a,char b){
	if(a=='A'||b=='A'){
		if(b==a+1||a==b+1||b==a+2||a==b+2) return 1;
		else return 0;
	}
	else if(a=='B'||b=='B'){
		if(b==a+1||b==a-1||a==b+1||a==b-1) return 1;
		else return 0;
	}
	else if(a=='C'){
		if(b==a-1||b==a-2) return 1;
		else return 0;
	}
	else if(b=='C'){
		if(a==b-1||a==b-2) return 1;
		else return 0;
	}
	else if(a=='F'||b=='F'){
		if(a==b-1||b==a-1) return 1;
		else return 0;
	}
	else return false;
}
bool xl(char a,char b){
	if(a=='A'||b=='A'){
		if(b==a+1||a==b+1) return 1;
		else return 0;
	}
	else if(a=='B'||b=='B'){
		if(b==a+1||b==a-1||a==b+1||a==b-1) return 1;
		else return 0;
	}
	else if(a=='C'||b=='C'||a=='F'||b=='F'){
		if(b==a-1||a==b-1) return 1;
		else return 0;
	}
	else return 0;
}
char b2,b1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2,a1="",a2="";
	cin>>c1>>s1>>c2>>s2;
	a1=s1[0]+s1[1];
	b1=s1[2];
	a2=s2[0]+s2[1];
	b2=s2[2];
	if(c1==c2){
		cout<<1;
		if(a1==a2){
			cout<<1;
			if(ty(b1,b2)){
				cout<<1;
			    if(xl(b1,b2)) cout<<1;
			    else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
 } 