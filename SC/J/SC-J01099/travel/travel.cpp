#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x,xx,y,yy;
	cin>>x>>xx>>y>>yy;
	if(x==y){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(xx[0]==yy[0]&&xx[1]==yy[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((xx[2]-'A'<3&&yy[2]-'A'<3)||(xx[2]-'A'>2&&yy[2]-'A'>2)){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(xx[2]-yy[2]==1||xx[2]-yy[2]==-1){
		cout<<1;
	}
	else cout<<0;
	return 0;
}
//A