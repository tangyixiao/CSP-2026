#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool bb,bbb,bbbb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c){
		bb=1;
		cout<<"1";
	} else{
		cout<<"0";
	}
	if(bb==1&&b.substr(0,2)==d.substr(0,2)){
		bbb=1;
		cout<<"1";
	} else{
		cout<<"0";
	}
	if(bbb==1&&b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C'||bbb==1&&b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F'){
		cout<<"1";
		bbbb=1;
	} else{
		cout<<"0";
	}
	char cc=b[2],ccc=d[2];
	if(cc>ccc){
		swap(cc,ccc);
	}
	if(bbbb==1&&cc=='A'&&ccc=='B'||bbbb==1&&cc=='B'&&ccc=='C'||bbbb==1&&cc=='D'&&ccc=='F'){
		cout<<"1";
	} else{
		cout<<"0";
	}
	return 0;
} 
