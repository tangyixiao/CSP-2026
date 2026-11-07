#include<bits/stdc++.h>
using namespace std;
#define int long long
bool samel(char x,char y){
	if(x=='A'){
		if(y=='B'||y=='C')return 1;
		else return 0;
	}if(x=='B'){
		if(y=='A'||y=='C')return 1;
		else return 0;
	}if(x=='C'){
		if(y=='A'||y=='B')return 1;
		else return 0;
	}if(x=='D'){
		if(y=='F')return 1;
		else return 0;
	}if(x=='F'){
		if(y=='D')return 1;
		else return 0;
	}return 0;
}bool samer(int x,int y){
	if(x=='A'){
		if(y=='B')return 1;
		else return 0;
	}if(x=='B'){
		if(y=='A'||y=='C')return 1;
		else return 0;
	}if(x=='C'){
		if(y=='B')return 1;
		else return 0;
	}if(x=='D'){
		if(y=='F')return 1;
		else return 0;
	}if(x=='F'){
		if(y=='D')return 1;
		else return 0;
	}return 0;
}signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,q,b,p;
	cin>>a>>q>>b>>p;
	if(a==b)cout<<1;
	else cout<<0;
	
	if(a==b&&(q[0]==p[0]&&q[1]==p[1]))cout<<1;
	else cout<<0;
	
	if(a==b&&(q[0]==p[0]&&q[1]==p[1])&&samel(q[2],p[2]))cout<<1;
	else cout<<0;
	
	if(a==b&&(q[0]==p[0]&&q[1]==p[1])&&samel(q[2],p[2])&&samer(q[2],p[2]))cout<<1;
	else cout<<0;
	return 0;
} 
