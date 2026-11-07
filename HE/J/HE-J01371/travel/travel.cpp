#include<bits/stdc++.h>
using namespace std;
string xt,xz,yt,yz;
char xb,yb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>xt>>xz>>yt>>yz;
	if(xt!=yt){
		cout<<"0000";
		return 0;
	}
	else{
		if(xz[0]!=yz[0]||xz[1]!=yz[1]){
			cout<<"1000";
			return 0;
		}
		if(xz[2]<='C'){
			xb='l';
		}
		else{
			xb='r';
		}
		if(yz[2]<='C'){
			yb='l';
		}
		else{
			yb='r';
		}
		if(xb!=yb){
			cout<<"1100";
			return 0;
		}
		if(abs(xz[2]-yz[2])==1){
			cout<<"1111";
			return 0;
		}
		cout<<"1110";
	}
	return 0;
} 
