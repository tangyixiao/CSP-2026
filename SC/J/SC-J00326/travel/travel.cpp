#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	string x,y;
	for(int i=0;i<2;i++){
		cin>>a[i];
	}
	for(int i=0;i<3;i++){
		cin>>x[i];
	}
	for(int i=0;i<2;i++){
		cin>>b[i];
	}
	for(int i=0;i<3;i++){
		cin>>y[i];
	}
	if(a[0]==b[0]&&a[1]==b[1]){
		cout<<"1";	
	}
	if(a[0]!=b[0]||a[1]!=b[1]){
		cout<<"0000";
		return 0;
	}
	if(x[0]==y[0]&&x[1]==y[1]){
		cout<<"1";	
	}
	if(x[0]!=y[0]||x[1]!=y[1]){
		cout<<"000";
		return 0;
	}
	if((x[2]=='A'&&y[2]=='B')||(x[2]=='B'&&(y[2]=='A'||y[2]=='C'))||(x[2]=='C'&&y[2]=='B')||(x[2]=='D'&&y[2]=='F')||(x[2]=='F'&&y[2]=='D')){
		cout<<"11";
		return 0;
	}
	if((x[2]=='A'&&y[2]=='C')||(x[2]=='C'&&y[2]=='A')){
		cout<<"10";
		return 0;
	}
	else{
		cout<<"00";
		return 0;
	}
	return 0;
}