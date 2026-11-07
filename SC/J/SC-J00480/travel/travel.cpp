#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int a1,a2,a3,a4;
bool k[10][25];
bool k1[5];
int tapp(string x){
	if(x[0]=='0') return x[1]-'0';
	else{
		int h=(x[0]-'0')*10+x[1]-'0';
		return h;
	}
}
int prinze(string x){
	int h;
	if(x[2]=='A') h=1;
	else if(x[2]=='B') h=2;
	else if(x[2]=='C') h=3;
	else if(x[2]=='D') h=4;
	else if(x[2]=='F') h=5;
	return h;
}
void taap(string x,string y){
	int x2,y2;
	x2=prinze(x);
	y2=prinze(y);
	if(a2==a4&&k1[1]==true){
		k1[2]=true;
		if((x2<=3&&y2<=3)||(x2>3&&y2>3)){
			k1[3]=true;
			if(abs(x2-y2)==1&&(x2+y2)!=7) k1[4]=true;
			else k1[4]=false;
		}
		else k1[3]=false;
	}
	else k1[2]=false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	a1=tapp(c1);
	a2=tapp(c2);
	a3=tapp(c3);
	a4=tapp(c4);
	if(a1==a3) k1[1]=true;
	else k1[1]=false;
	taap(c2,c4);
	for(int i=1;i<=4;i++) cout<<k1[i];
	return 0;
}