#include <bits/stdc++.h>
using namespace std;
string x,y,m,n;
string a="0",b="0",c="0",d="0";

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	cin>>x>>y>>m>>n;
	if (x==m){
		a="1";
	}
	if (y[0]==n[0]&&y[1]==n[1]){
		b="1";
	}
	if (y[2]=='A'||y[2]=='B'||y[2]=='C'){
		if (n[2]=='A'||n[2]=='B'||n[2]=='C'){
			c="1";
		}
		
	}else if (y[2]=='D'||n[2]=='F'){
		if (y[2]=='D'||n[2]=='F'){
			c="1";
		}
		
	}
	if ((y[2]=='A'&&n[2]=='B')||(y[2]=='B'&&(n[2]=='A'||n[2]=='C'))||(y[2]='C'&&n[2]=='B')){
		d="1";
	}else if ((y[2]=='F'&&n[2]=='D')||(y[2]=='D'&&n[2]=='F')){
		d="1";
	}
    cout<<a<<b<<c<<d<<endl;
    
    
    return 0;
}
