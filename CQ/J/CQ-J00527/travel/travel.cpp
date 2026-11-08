#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,p,q;
char x,r;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if (a!=c) {cout<<"0000";return 0;}
	else cout<<1;
	p=b[0];p+=b[1];
	q=d[0];q+=d[1];
	r=b[2],x=d[2];
	if (p!=q){cout<<"000";return 0;}
	else{
		cout<<1;
		if ((r<='C'&&x>='D')||(r>='D'&&x<='C')) cout<<"00";
		else if (r<='C'){
			if (r=='A'&&x=='C'||r=='C'&&x=='A') cout<<"10";
			else cout<<"11";
		}
		else cout<<"11";
	}
	return 0;
}

