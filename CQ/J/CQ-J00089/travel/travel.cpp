#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string a,b,c,d;
	cin>>c>>a>>d>>b;
	
	if(c!=d){
		cout<<"0000";
		return 0;}
	cout<<"1";
	
	if(a[0]!=b[0]||a[1]!=b[1]){
		cout<<"000";
		return 0;}
	cout<<1;
	
	if(a[2]=='A'||a[2]=='B'||a[2]=='C'){
		if(b[2]=='A'||b[2]=='B'||b[2]=='C'){
			cout<<"1";
			if(a[2]=='B'||b[2]=='B')
			  cout<<"1";
			else
			  cout<<"0";}}
	else{
		if(b[2]=='D'||b[2]=='F'){
			cout<<"11";}
		else{
			cout<<"00";}}
	
	return 0;
}  
