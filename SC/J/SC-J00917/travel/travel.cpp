#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	int k= b[2]-d[2];
	k=abs(k);
	if(a==c) {
		cout<<1;
		
		if(b[1]==d[1]&&b[0]==d[0]){
			cout<<1;
		}else cout<<0;
		if(k<=2&& (b[2]!='D'&&d[2]!='C')&&(d[2]!='D'&&b[2]!='C')&&b[1]==d[1]&&b[0]==d[0]){
			cout<<1;
		} else  cout<<0;
		if(k<=1 &&(b[2]!='D'&&d[2]!='C')&&(d[2]!='D'&&b[2]!='C')&&b[1]==d[1]&&b[0]==d[0]){
			cout<<1;
		} else  cout<<0;	
	}
	else cout<<0000;
	return 0;
}