#include<bits/stdc++.h>
using namespace std;
string a[10];
string s="";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++){
		cin>>a[i];
	}
	if(a[1]==a[3]){
		s=s+'1';
	}else{
		s="0000";
		cout<<s;
		return 0;
	}
	bool f=0;
	for(int i=0;i<2;i++){
		if(a[2][i]!=a[4][i]){
			f=1;
		}
	}
	if(f==0){
		s=s+'1';
	}
	else{
		s+="000";
		cout<<s;
		return 0;
	}
	if(a[2][2]=='A'&&(a[4][2]=='B'||a[4][2]=='C')){
		s+='1';
	}else if(a[2][2]=='B'&&(a[4][2]=='A'||a[4][2]=='C')){
		s+='1';
	}else if(a[2][2]=='C'&&(a[4][2]=='A'||a[4][2]=='B')){
		s+='1';
	}else if(a[2][2]=='D'&&(a[4][2]=='F')){
		s+='1';
	}else if(a[2][2]=='F'&&a[4][2]=='D'){
		s+='1';
	}else{
		s+="00";
		cout<<s;
		return 0;
	}
	if(a[2][2]=='A'&&a[4][2]=='B'){
		s+='1';
	}
	else if(a[2][2]=='B'&&(a[4][2]=='A'||a[4][2]=='C')){
		s+='1';
	}else if(a[2][2]=='C'&&a[4][2]=='B'){
		s+='1';
	}else if(a[2][2]=='D'&&a[4][2]=='F'){
		s+='1';
	}else if(a[2][2]=='F'&&a[4][2]=='D'){
		s+='1';
	}else{
		s+="0";
		cout<<s;
		return 0;
	}
	cout<<s;
	return 0;
}
