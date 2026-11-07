#include<bits/stdc++.h>
using namespace std;
string x,y,xx,yy;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x;
	cin>>y;
	cin>>xx>>yy;
	if(x[0]==xx[0]&&x[1]==xx[1]){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(y[0]==yy[0]&&y[1]==yy[1]){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if(((y[2]=='A'||y[2]=='B'||y[2]=='C')&&(yy[2]=='A'||yy[2]=='B'||yy[2]=='C'))||((y[2]=='D'||y[2]=='F')&&(yy[2]=='D'||yy[2]=='F'))){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	if((y[2]=='A'&&yy[2]=='B')||(y[2]=='C'&&yy[2]=='B')||(y[2]=='D'&&yy[2]=='F')){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}