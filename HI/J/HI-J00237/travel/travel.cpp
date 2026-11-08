#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cxr,cxx,ry,re,xy,xe;
	cin>>cxr;
	string pxr,pxx;
	cin>>pxr;
	cin>>cxx;
	cin>>pxx;
	ry=pxr[0]-48;
	re=pxr[1]-48;
	xy=pxx[0]-48;
	xe=pxx[1]-48;
	if(cxr==cxx) cout<<"1";
	else{ 
		cout<<"0000";
		return 0;}
	if(ry==xy&&re==xe) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	
	
	//同右侧 
	
	if(pxr[2]=='A'&&pxx[2]=='B'){
		cout<<"11";
		return 0;}
	else if(pxr[2]=='A'&&pxx[2]=='C'){
		cout<<"10";
		return 0;}
	else if(pxr[2]=='B'&&pxx[2]=='C'){
		cout<<"11";
		return 0;
	}
	
	else if(pxx[2]=='A'&&pxr[2]=='B'){
		cout<<"11";
		return 0;}
	else if(pxx[2]=='A'&&pxr[2]=='C'){
		cout<<"10";
		return 0;}
	else if(pxx[2]=='B'&&pxr[2]=='C'){
		cout<<"11";
		return 0;
	}
	
	
	//同左侧
	
	 
	else if(pxr[2]=='D'&&pxx[2]=='F'){
		cout<<"11";
		return 0;}
	else if(pxx[2]=='D'&&pxr[2]=='F'){
		cout<<"11";
		return 0;}
		
	//不同侧 
		
	else if((pxr[2]=='A'||pxr[2]=='B'||pxr[2]=='C')&&(pxx[2]=='D'||pxx[2]=='F')){
		cout<<"00";
		return 0;
	}
	else if((pxx[2]=='A'||pxx[2]=='B'||pxx[2]=='C')&&(pxr[2]=='D'||pxr[2]=='F')){
		cout<<"00";
		return 0;
	}
	return 0;
}
