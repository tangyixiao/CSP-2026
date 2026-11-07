#include<bits/stdc++.h>
using namespace std;
string x,y,x2,y2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>y>>x2>>y2;
	if(x==x2) cout<<1;
	else cout<<0;
	if(x==x2){
		if(y[0]==y2[0]&&y[1]==y2[1]) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	if(x==x2){
		if(y[0]==y2[0]&&y[1]==y2[1]){
			if(((y[2]=='A'||y[2]=='B'||y[2]=='C')&&(y2[2]=='A'||y2[2]=='B'||y2[2]=='C'))||((y[2]=='D'||y[2]=='F')&&(y2[2]=='D'||y2[2]=='F'))) cout<<1;
			else cout<<0;
		}
		else cout<<0;
	}
	else cout<<0;
	if(x==x2){
		if(y[0]==y2[0]&&y[1]==y2[1]){
			if((y[2]=='A'&&y2[2]=='B')||(y[2]=='B'&&y2[2]=='A')||(y[2]=='B'&&y2[2]=='C')||(y[2]=='C'&&y2[2]=='B')||(y[2]=='D'&&y2[2]=='F')||(y[2]=='F'&&y2[2]=='D')) cout<<1;
			else cout<<0;
		}
		else cout<<0;
	}
	else cout<<0;
	return 0;
}