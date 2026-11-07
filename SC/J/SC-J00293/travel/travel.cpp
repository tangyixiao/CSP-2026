#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r","in");
	freopen("travel.out","w","out");
	cin>>a>>b>>c>>d;
	if(a[0]!=c[0]||a[1]!=c[1]){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(b[0]!=d[0]||b[1]!=d[1]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(!(b[2]>'C'&&d[2]>'C')&&!(b[2]<='C'&&d[2]<='C')){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(abs(b[2]-d[2])==1) cout<<1;
	else cout<<0;
	return 0;
} 