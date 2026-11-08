#include<bits/stdc++.h>
using namespace std;
string x,n,y,m;
int a,b,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>n>>y>>m;
	if(x[0]==y[0] && x[1]==y[1]){
		cout<<1;
		a=1;
	}else{
		cout<<0;
	}
	if(a==1 && n[0]==m[0] && n[1]==m[1]){
		cout<<1;
		b=1;
	}else{
		cout<<0;
	}
	if(b==0 || n[2]=='D' || n[2]=='F' && m[2]!='D' && m[2]!='F' || m[2]=='D' || m[2]=='F' && n[2]!='D' && n[2]!='F'){
		cout<<0;
	}else{
		cout<<1;
		c=1;
	}
	if(c==1 && (n[2]=='A' && m[2]=='B' || n[2]=='B' && m[2]=='A' || n[2]=='B' && m[2]=='C' || n[2]=='C' && m[2]=='B' || n[2]=='D' && m[2]=='F' || n[2]=='F' && m[2]=='D')){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
