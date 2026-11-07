#include<bits/stdc++.h>
using namespace std;
string x,xa,y,ya;
string xx,yx;
char xy,yy;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>x>>xa>>y>>ya;
	for(int i=0;i<xa.size();i++){
		if(xa[i]>='0' && xa[i]<='9')
			xx+=xa[i];
		else
			xy+=xa[i];
	}
	for(int i=0;i<ya.size();i++){
		if(ya[i]>='0' && ya[i]<='9')
			yx+=ya[i];
		else
			yy+=ya[i];
	}
	if(x==y)
		cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(x==y && xx==yx)
		cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(x==y && xx==yx && (((xy=='A' || xy=='B' || xy=='C')&&(yy=='A' || yy=='B' || yy=='C')) || ((xy=='D' && yy=='F')||(xy=='F' && yy=='D'))))
		cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(x==y && xx==yx && (((xy=='A' || xy=='B' || xy=='C')&&(yy=='A' || yy=='B' || yy=='C')) || ((xy=='D' && yy=='F')||(xy=='F' && yy=='D'))) && (((xy=='D' && yy=='F')||(xy=='F' && yy=='D')) || ((xy=='B' && yy=='C')||(xy=='C' && yy=='B')) || ((xy=='A' && yy=='B')||(xy=='B' && yy=='A'))))
		cout<<1;
	else
		cout<<0;
	return 0;
}