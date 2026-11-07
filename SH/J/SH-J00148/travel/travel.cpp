#include<bits/stdc++.h>
using namespace std;
string r1,r2,x1,x2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r1>>r2>>x1>>x2;
	int rp=r2[2]-65,xp=x2[2]-65;	
	if(r1==x1){
		cout<<"1";
	}else if(r1!=x1){
		cout<<"0000";
		return 0;
	}if(r2[0]==x2[0]&&r2[1]==x2[1]){
		cout<<"1";
	}else if(!(r2[0]==x2[0]&&r2[1]==x2[1])){
		cout<<"000";
		return 0;
	}if((rp<=2&&xp<=2)||(rp>2&&xp>2)){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}if(rp>2){
		cout<<"1";
	}else if(abs(rp-xp)==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
