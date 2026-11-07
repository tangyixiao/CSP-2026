#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
int sr,sx,cr,cx;
char opr,opx;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
//	ios::sync_with_stdio(0);
//	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<c1.size();i++){
		cr+=(c1[i]-'0');
	}
	for(int i=0;i<s1.size()-1;i++){
		sr+=(s1[i]-'0');
	}
	opr=s1[s1.size()-1];
	for(int i=0;i<c2.size();i++){
		cx+=(c2[i]-'0');
	}
	for(int i=0;i<s2.size()-1;i++){
		sx+=(s2[i]-'0');
	}
	opx=s2[s2.size()-1];
	if(cr==cx){
		cout<<"1";
	}else{
		cout<<"0";
	}
//--------------------------------------
	if(cr==cx&&sr==sx){
		cout<<"1";
	}else{
		cout<<"0";
	}
//--------------------------------------
	bool f=false;
	if((opr>='A'&&opr<='C'&&opx>='A'&&opx<='C')||(opr>='D'&&opr<='F'&&opx>='D'&&opx<='F')){
		f=true;
	}
	if(cr==cx&&sr==sx&&f==true){
		cout<<"1";
	}else{
		cout<<"0";
	}
//--------------------------------------
	bool r=false;
	if((opr=='A'&&opx=='B')||(opr=='B'&&opx=='C')||(opr=='D'&&opx=='F')||(opx=='A'&&opr=='B')||(opx=='B'&&opr=='C')||(opx=='D'&&opr=='F')){
		r=true;
	}
	if(cr==cx&&sr==sx&&r==true){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
