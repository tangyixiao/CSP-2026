#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int n,m;
	cin>>a>>b>>c>>d;
	n=int(char(b[2]));
	m=int(char(d[2]));
	if(a==c){
		cout<<"1";
	}else cout<<"0";
	if(a==c&&b[1]==d[1]&&b[0]==d[0]){
		cout<<"1";
	}else cout<<"0";
	if(a==c&&b[1]==d[1]&&b[0]==d[0]&&n>='A'&&n<='C'&&m>='A'&&m<='C'||n=='D'&&m=='E'||n=='E'&&m=='D'){
		cout<<"1";
	}else cout<<"0";
	if(a==c&&b[1]==d[1]&&b[0]==d[0]&&n>='A'&&n<='C'&&m>='A'&&m<='C'){
		if(n=='A'&&m=='B'||n=='B'&&m=='A'||n=='B'&&m=='C'||n=='C'&&m=='B'||n=='D'&&m=='E'||n=='E'&&m=='D'){
		cout<<"1";
	}
	}else  cout<<"0";
	return 0;
}
