#include<bits/stdc++.h>
using namespace std;
string cx1,cx2,zw1,zw2;
int main(){
	freopen("travel.in",stdin,r);
	freopen("travel.out",stdout,w);
	cin>>cx1>>zw1>>cx2>>zw2;
	if(cx1!=cx2){
		cout<<"0000";
		return 0;
	}
	if(zw1[0]!=zw2[0] || zw1[1]!=zw2[1]){
		cout<<"1000";
		return 0;
	}
	if((zw1[2]== 'F' || zw1[2]=='D' || zw2[2]=='F' || zw2[2]=='D') && (zw1[2]=='A' || zw1[2]=='B' || zw1[2]=='C' || zw2[2]=='A' || zw2[2]=='B' || zw2[2]=='C')){
		cout<<"1100";
		return 0; 
	}
	if(zw1[2]=='F' || zw1[2]=='D'){
		cout<<"1111";
		return 0;
	}
	if((zw1[2]=='A' && zw2[2]=='B') || (zw1[2]=='B' && zw2[2]=='C')){
		cout<<"1111";
		return 0;
	}
	else cout<<"1110";
	return 0;
}
