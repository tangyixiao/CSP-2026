#include<bits/stdc++.h>
using namespace std;
int s[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	bool f=false,q=false,v=true;
	if(a==c){
		s[0]=1;
		f=true;
	}
	if(f==true&&b[0]==d[0]&&b[1]==d[1]){
		s[1]=1;
		q=true;
	}
	if((b[2]>='D'&&b[2]<='F')&&(d[2]>='A'&&d[2]<='C')||(d[2]>='D'&&d[2]<='F')&&(b[2]>='A'&&b[2]<='C')){
		v=false;
	}
	else if(q==true&&((b[2]>='D'||b[2]<='F')&&(d[2]>='D'||d[2]<='F')||(b[2]>='A'||b[2]<='C')&&(d[2]>='A'||d[2]<='C'))){
		s[2]=1;
	}
	if(f==true){
		if(v==true&&q==true&&(b[2]+1==d[2]||b[2]-1==d[2])){
			s[3]=1;
		}
	}
	for(int i=0;i<4;i++){
		if(s[i]==1){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	return 0;
}
