#include <bits/stdc++.h>
using namespace std;
bool check1(char a,char b){
	if(a=='A'||a=='B'||a=='C'){
		if(b=='A'||b=='B'||b=='C') return 1;
	}else if(a=='D'||a=='F'){
		if(b=='D'||b=='F') return 1;
	}
	return 0;
}
bool check2(char a,char b){
	if(a=='A'){
		if(b=='B') return 1;
	}else if(a=='B'){
		if(b=='A'||b=='C') return 1;
	}else if(a=='C'){
		if(b=='B') return 1;
	}else if(a=='D'){
		if(b=='F') return 1;
	}else if(a=='F'){
		if(b=='D') return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b,c,d,x,y;
	bool flag=1;
	cin>>a>>b>>c>>d;
	x=b.substr(0,2),y=d.substr(0,2);
	if(a==c) cout<<1;
	else{flag=0;cout<<0;}
	
	if(x==y && flag==1) cout<<1;
	else{flag=0;cout<<0;}
	
	if(check1(b[2],d[2]) && flag==1) cout<<1;
	else{flag=0;cout<<0;}
	
	if(check2(b[2],d[2]) && flag==1) cout<<1;
	else{flag=0;cout<<0;}
	
	return 0;
}