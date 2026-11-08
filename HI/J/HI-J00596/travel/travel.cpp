#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	bool f=false;
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1]){
		cout<<1;
		f=true;
	}
	else cout<<0;
	if(f==true&&b[0]==d[0]&&b[1]==d[1])	cout<<1;
	else{
		cout<<0;
		f=false;
	}
	if(f==true&&((b[2]=='F'&&d[2]=='D')||(b[2]=='D'&&d[2]=='F')||(b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='C')||(b[2]=='A'&&d[2]=='C')||(b[2]=='B'&&d[2]=='A')||(b[2]=='C'&&d[2]=='B')||(b[2]=='C'&&d[2]=='A'))) cout<<1;
	else{
		cout<<0;
		f=false;
	}
	if(f==true&&((b[2]=='F'&&d[2]=='D')||(b[2]=='D'&&d[2]=='F')||(b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='C'))) cout<<1;
	else cout<<0;
	return 0;
} 
