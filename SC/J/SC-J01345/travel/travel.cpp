#include<bits/stdc++.h> 
using namespace std;
string cx,sx,cy,sy;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx>>sx>>cy>>sy;
	bool l=0;
	for(int i=0;i<2;i++){
		if(cx[i]!=cy[i])l=1;
	}
	if(l==0){
		cout<<1;
		l=0;
		for(int i=0;i<2;i++){
			if(sx[i]!=sy[i])l=1;
		}
		if(l==0){
			cout<<1;
			if((sx[2]<='C'&&sy[2]<='C')||(sx[2]>'C'&&sy[2]>='C')){
				cout<<1;
				if((sx[2]=='A'&&sy[2]=='B')||(sx[2]=='B'&&(sy[2]=='A'||sy[2]=='C'))||(sx[2]=='C'&&sy[2]=='B')||(sx[2]=='D'&&sy[2]=='E')||(sx[2]=='E'&&sy[2]=='D')){
					cout<<1;
				}else cout<<'0';
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}