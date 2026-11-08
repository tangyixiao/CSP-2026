#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,z1,c2,z2;
	cin>>c1>>z1>>c2>>z2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	int x=(z1[0]-'0')*10;
	x+=(z1[1]-'0');
	int y=(z2[0]-'0')*10;
	y+=(z2[1]-'0');
	if(x!=y){
		cout<<"1000";
		return 0;
	}
	if(((z1[2]=='A'||z1[2]=='B'||z1[2]=='C')&&(z2[2]=='A'||z2[2]=='B'||z2[2]=='C'))||((z1[2]=='D'||z1[2]=='F')&&(z2[2]=='D'||z2[2]=='F'))){
		int w=0;
	}else{
		cout<<"1100";
		return 0; 
	}
	if((z1[2]=='A'&&z2[2]=='B')||(z2[2]=='A'&&z1[2]=='B')||(z1[2]=='B'&&z2[2]=='C')||(z1[2]=='C'&&z2[2]=='B')||(z1[2]=='D'&&z2[2]=='F')||(z1[2]=='F'&&z2[2]=='D')){
		cout<<"1111";
	}else{
		cout<<"1110";
	}
	return 0;
}
