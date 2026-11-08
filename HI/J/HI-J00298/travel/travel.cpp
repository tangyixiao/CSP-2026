#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
char a_[2],b_[2];
char a[3];
char b[3];
int emu=-1;
cin>>a_>>a;
cin>>b_>>b;
if(a_[0]==b_[0]&&a_[1]==b_[1])cout<<1;
else{
	cout<<0;
}
if(a[0]==b[0]&a[1]==b[1])cout<<1;
else{
	cout<<0;
	
}
if(a[2]<='C'&b[2]<='C'){
	cout<<1;
	emu=1;
}
else{
	if(a[2]>'C'&b[2]>'C'){
	cout<<1;
	emu=0;
	}
	else{
		
		cout<<00;
		return 0;
	}
}
if(emu==0)cout<<1;
else{
	if(a[2]+1==b[2]||b[2]+1==a[2]){
	cout<<1;
	}
	else{
		cout<<0;
	}
	
}
return 0;

 
}
