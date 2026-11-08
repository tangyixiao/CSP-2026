#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c=0,d=0;
	string x,y;
	cin>>a>>x>>b>>y;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	c+=(x[0]-'0')*10;
	c+=x[1]-'0';
	d+=(y[0]-'0')*10;
	d+=y[1]-'0';
	if(c!=d){
		cout<<"1000";
		return 0;
	}
	int u,v;
	if(x[2]<='C'){
		u=1;
	}
	else{
		u=0;
	}
	if(y[2]<='C'){
		v=1;
	}
	else{
		v=0;
	}
	if(u!=v){
		cout<<"1100";
		return 0;
	}
	int uu=x[2]-y[2];
	if(uu<0){
		uu=-uu;
	}
	if(uu!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
