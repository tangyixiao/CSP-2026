#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen("travel.cpp","r",stdin);
	freopen("travel.cpp","w",stdout);
	string r_xiang,r_zuo,x_xiang,x_zuo;
	cin>>r_xiang>>r_zuo>>x_xiang>>x_zuo;//1
	if(r_xiang==x_xiang){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(r_xiang==x_xiang && r_zuo[1]==x_zuo[1]){//2
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(r_xiang==x_xiang && r_zuo[0]==x_zuo[0] && r_zuo[1]==x_zuo[1] && ((r_zuo[2]>='D'&&x_zuo[2]>='D' ) || (r_zuo[2]<'D'&&x_zuo[2]<'D'))){//3
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(r_xiang==x_xiang && r_zuo[0]==x_zuo[0]  && r_zuo[1]==x_zuo[1]  &&  ((r_zuo[2]=='A'&&x_zuo[2]=='B')   ||  (r_zuo[2]=='C' && x_zuo[2]=='B')||(r_zuo[2]=='B' && x_zuo[2]=='A')||(r_zuo[2]=='B' && x_zuo[2]=='C') || (r_zuo[2]=='D' && x_zuo[2]=='E')||(r_zuo[2]=='E' && x_zuo[2]=='D'))){//4
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}


