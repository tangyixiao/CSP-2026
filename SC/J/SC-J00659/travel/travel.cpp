#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,rs,xc,xs;
	bool st=0,sc=0,ss=0,n=0;
	cin>>rc>>rs>>xc>>xs;
	if(rc==xc&&rs==xs){
		cout<<"1111";
		return 0;
	}
	else if(rc!=xc){
		cout<<"0000";
		return 0;
	}
	else{
		if(rc==xc) st=1;
		if(rs[0]==xs[0]&&rs[1]==xs[1]) sc=1;
		if(rs[2]>='A'&&rs[2]<='C'&&xs[2]>='A'&&xs[2]<='C'||rs[2]>='D'&&xs[2]>='D') ss=1;
		if(ss){
			if(rs[2]>='D') n=1;
			else{
				if(rs[2]!='A'&&xs[2]!='A') n=1;
				else if(rs[2]!='C'&&xs[2]!='C') n=1;
			}
		}
		if(!sc) cout<<"1000";
		else if(!ss) cout<<"1100";
		else if(!n) cout<<"1110";
		return 0;
	}
} 