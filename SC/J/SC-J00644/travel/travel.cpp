#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int f1=0,f2=0,f3=0,f4=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		f1=1;
	}else{
		cout<<0;
	}
	
	if((f1==1)&&(b[0]==d[0]&&b[1]==d[1])){
		cout<<1;
		f2=1;
	}else{
		cout<<0;
	}
	
	if((f2==1&&f1==1)&&(((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='E')&&(d[2]=='D'||d[2]=='E')))){
		cout<<1;
		f3=1;
	}else{
		cout<<0;
	}
	
	if((f1==1&&f2==1&&f3==1)&&abs(b[2]-d[2])==1){
		cout<<1;
		f4=1;
	}else{
		cout<<0;
	}
	return 0;
}