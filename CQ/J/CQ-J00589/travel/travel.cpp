#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,j;
int r,x,rp,rl,xp,xl;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]=='0'){
		r=a[1]-48;
	}else{
		r=10*(a[0]-48)+a[1]-48;
	}if(c[0]=='0'){
		x=c[1]-48;
	}else{
		x=10*(c[0]-48)+c[1]-48;
	}if(r==x){
		j+="1";
	}else{
		j+="0";
	}if(b[0]=='0'){
		rp=b[1]-48;
	}else{
		rp=10*(b[0]-48)+b[1]-48;
	}if(d[0]=='0'){
		xp=d[1]-48;
	}else{
		xp=10*(d[0]-48)+d[1]-48;
	}
	rl=b[2]-'A'+1;
	xl=d[2]-'A'+1;
	if(rp==xp&&j[0]=='1'){
		j+="1";
	}else{
		j+="0";
	}if(rp==xp&&((rl<=3&&rl>=1&&xl<=3&&xl>=1)||(rl<=6&&rl>=4&&xl<=6&&xl>=4))&&j[0]=='1'){
		j+="1";
	}else{
		j+="0";
	}if(j[2]=='1'&&((abs(rl-xl)==1&&rl<=3&&rl>=1&&xl<=3&&xl>=1)||(abs(rl-xl)==2&&rl<=6&&rl>=4&&xl<=6&&xl>=4))){
		j+="1";
	}else{
		j+="0";
	}
	cout<<j;
	return 0;
} 
