#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,c,b,d;
	cin>>a>>c>>b>>d;
	bool f=1,l=1,v=1,g=1;
	//cout<<a[1]<<b[1];
	if(a[1] != b[1] || a[0] != b[0]){
		f=0;
	}
	if(f==1){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(c[0] != d[0] || c[1]!= d[1]){
		l=0;	
	}
	if(l==1){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if(c[2]>='D' && d[2]<='C' || d[2]>='D' && c[2]<='C'){
		v=0;
	}
	if(v==1){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	if(c[2]!=d[2]-1 || c[2]=='C'){
		g=0;
	}
	if(d[2]!=c[2]-1 && d[2]=='C'){
		g=0;
	}
	if(g==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
