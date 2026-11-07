#include<bits/stdc++.h>
using namespace std;
string ans;
bool line(string a,string b,bool f){
	if(f==false){
		ans+='0';
		return false;
	}
	if(a[0]==b[0]&&a[1]==b[1]){
		ans+='1';
		return true;
	}
	else{
		ans+='0';
		return false;
	}
}
bool side(string a,string b,bool f){
	if(f==false){
		ans+='0';
		return false;
	}
	if(a[2]>='A'&&a[2]<='C'&&b[2]>='A'&&b[2]<='C'){
		ans+='1';
		return true;
	}
	else if((a[2]=='D'||a[2]=='F')&&(b[2]=='D'||b[2]=='F')){
		ans+='1';
		return true;
	}
	else{
		ans+='0';
		return false;
	}
}
void seat(string a,string b,bool f){
	if(f==false){
		ans+='0';
		return ;
	}
	if(a[2]=='A'&&b[2]=='B'){
		ans+='1';
		return ;
	}
	else if(a[2]=='B'&&b[2]=='C'){
		ans+='1';
		return ;
	}
	else if(a[2]=='B'&&b[2]=='A'){
		ans+='1';
		return ;
	}
	else if(a[2]=='C'&&b[2]=='B'){
		ans+='1';
		return ;
	}
	else if(a[2]=='D'&&b[2]=='F'){
		ans+='1';
		return ;
	}
	else if(a[2]=='F'&&b[2]=='D'){
		ans+='1';
		return ;
	}
	else{
		ans+='0';
		return ;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string cr,cx,sr,sx;
	cin>>cr>>sr>>cx>>sx;
	bool flag,fline,fside;
	if(cr==cx){
		ans="1";
		flag=true;
	}
	else{
		ans="0";
		flag=false;
	} 
	fline=line(sr,sx,flag);
	fside=side(sr,sx,fline);
	seat(sr,sx,fside);
	cout<<ans;
	return 0;
	fclose(stdin);
	fclose(stdout);
} 
