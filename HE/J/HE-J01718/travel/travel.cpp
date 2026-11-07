#include<bits/stdc++.h>
using namespace std;
int c,x;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	cin>>c>>a>>x>>b;
	bool cx;
	if(c==x){
		cout<<"1";
		cx=true;
	}else{
		cout<<"0";
		cx=false;
	}
	if(cx==false){
		cout<<"000";
		return 0;
	}
	bool zw;
	if(a[0]==b[0]&&a[1]==b[1]){
		cout<<"1";
		zw=true;
	}else{
		zw=false;
	}
	if(zw==false){
		cout<<"000";
		return 0;
	}
	if((a[2]<='C'&&b[2]<='C')||(a[2]>='D'&&b[2]>='D')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}if((a[2]-1==b[2]||b[2]-1==a[2])||(a[2]=='D'&&b[2]=='F')||(a[2]=='F'&&b[2]=='D')){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
 } 
