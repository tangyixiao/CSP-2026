#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string box[2];
	string seat[2];
	for(int i=0;i<=1;i++){
		cin>>box[i]>>seat[i];
	}
	bool boxx=false,line=false,side=false,near=false;
	if(box[0] == box[1]) boxx = true;
	if(seat[0][0] == seat[1][0] && seat[0][1] == seat[1][1] && boxx==true) line = true;
	char r=seat[0][2],x=seat[1][2];
	if(boxx==true && line==true){
		if(r=='A'){
			if(x=='B' || x=='C') side=true;
			if(x=='B') near=true;
		}
		if(r=='B'){
			if(x=='A' || x=='C'){
				side=true;
				near=true;
			}
		}
		if(r=='C'){
			if(x=='B' || x=='A') side=true;
			if(x=='B') near=true;
		}
		if(r=='D'){
			if(x=='E'){
				side=true;
				near=true;}
		}
		if(r=='E'){
			if(x=='D'){
				side=true;
				near=true;}
		}
	}
	if(boxx==true) cout<<'1';
	else cout<<'0';
	if(line==true) cout<<'1';
	else cout<<'0';
	if(side==true) cout<<'1';
	else cout<<'0';
	if(near==true) cout<<'1';
	else cout<<'0';
	return 0;
}

