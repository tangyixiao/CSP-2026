#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a[0]==c[0] && a[1]==c[1]){
		cout<<'1';
	}
	else{
		cout<<"0000"<<endl;
		return 0;
	}
	if(b[0]==d[0] && b[1]==d[1]){
		cout<<'1';
	}
	else{
		cout<<"000"<<endl;
		return 0;
	}
	bool x=0;
	if(b[2]=='A'){
		if(d[2]=='B' || d[2]=='C'){
			x=1;
		}
	}
	if(b[2]=='B'){
		if(d[2]=='A' || d[2]=='C'){
			x=1;
		}
	}
	if(b[2]=='C'){
		if(d[2]=='A' || d[2]=='B'){
			x=1;
		}
	}
	if(b[2]=='D'){
		if(d[2]=='F'){
			x=1;
		}
	}
	if(b[2]=='F'){
		if(d[2]=='D'){
			x=1;
		}
	}
	if(x==1){
		cout<<'1';
	}
	else{
		cout<<"00"<<endl;
		return 0;
	}
	x=0;
	if(d[2]-b[2]==1 || b[2]-d[2]==1){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
	return 0;
}
