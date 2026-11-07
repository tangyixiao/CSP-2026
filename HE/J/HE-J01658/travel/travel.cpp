#include<bits/stdc++.h>
using namespace std;
string zhr,zhx,xhr,xhx; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","W",stdout);
	cin>>xhr>>zhr>>xhx>>zhx;
	if(xhr==xhx){
		cout<<'1';
		if(zhr[0]==zhx[0]&&zhr[1]==zhx[1]){
			cout<<'1'; 
			if((zhr[2]=='F'&&zhx[2]=='D')||(zhr[2]=='D'&&zhx[2]=='F')||(zhr[2]=='C'&&zhx[2]=='B')||(zhr[2]=='B'&&zhx[2]=='C')||(zhr[2]=='B'&&zhx[2]=='A')||(zhr[2]=='A'&&zhx[2]=='B'))cout<<"11";
			else if((zhr[2]=='A'&&zhx[2]=='C')||(zhr[2]=='C'&&zhx[2]=='A'))cout<<"10";
			else cout<<"00" ;
		}else{
			cout<<"000";
		}
	}else{ 
		cout<<"0000";
	}
	return 0;
}
