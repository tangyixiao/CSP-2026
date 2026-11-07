#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool e=false,f=false,g=false,h=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		e=true;
	if(b[0]==d[0]&&b[1]==d[1]){
		f=true;
	if(b[2]=='A'){
		if(d[2]=='A'||d[2]=='B'||d[2]=='C'){
			g=true;
			if(b[2]==d[2]-1||b[2]==d[2]+1){
				h=true;
			}
		}
	}
	if(b[2]=='B'){
		if(d[2]=='A'||d[2]=='B'||d[2]=='C'){
			g=true;
			if(b[2]==d[2]-1||b[2]==d[2]+1){
				h=true;
			}
		}
	}
	if(b[2]=='C'){
		if(d[2]=='A'||d[2]=='B'||d[2]=='C'){
			g=true;
			if(b[2]==d[2]-1||b[2]==d[2]+1){
				h=true;
			}
		}
	}
	if(b[2]=='D'){
		if(d[2]=='D'||d[2]=='E'){
			g=true;
			if(b[2]==d[2]-1||b[2]==d[2]+1){
				h=true;
			}
		}
	}
	if(b[2]=='E'){
		if(d[2]=='D'||d[2]=='E'){
			g=true;
			if(b[2]==d[2]-1||b[2]==d[2]+1){
				h=true;
			}
		}
	}
    }
    }
	cout<<e<<f<<g<<h;
	return 0;
}
