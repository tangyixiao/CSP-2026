#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m,mm=0,yp=0;
	string n1,m1;
	cin>>n>>n1>>m>>m1;
	if(n==m){
		cout<<"1";
		mm=1;
	}
	else
		cout<<"0";
	if(mm==1&&m1[0]+m1[1]==n1[0]+n1[1]){
		cout<<"1";
	}
	else{
		mm=0;
		cout<<"0";
	}
	if(mm==1&&m1[2]>='A'&&m1[2]<='C'&&n1[2]>='A'&&n1[2]<='C'){
		cout<<"1";
	}
	else if(mm==1&&m1[2]>='D'&&m1[2]<='F'&&n1[2]>='D'&&n1[2]<='F'){
		cout<<"1";
		yp=1;
	}
	else{
		mm=0;
		cout<<"0";
	}
	if(yp==1&&m==1){
		cout<<"1";
	}
	else if(mm==1&&n1[2]=='B'||m1[2]=='B'){
		cout<<"1";
	}
	else{
		mm=0;
		cout<<"0";
	}
	return 0;
}
