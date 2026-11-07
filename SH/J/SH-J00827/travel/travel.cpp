#include<bits/stdc++.h>
using namespace std;
struct tick{
	int a,b;
	char c;
};
tick r,x;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char ch;
	cin>>ch;
	r.a+=10*(ch-'0');
	cin>>ch;
	r.a+=ch-'0';
	cin>>ch;
	r.b+=10*(ch-'0');
	cin>>ch;
	r.b+=ch-'0';
	cin>>r.c;
	cin>>ch;
	x.a+=10*(ch-'0');
	cin>>ch;
	x.a+=ch-'0';
	cin>>ch;
	x.b+=10*(ch-'0');
	cin>>ch;
	x.b+=ch-'0';
	cin>>x.c;
	if(r.a!=x.a){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(r.b!=x.b){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((r.c<='C'&&x.c<='C')||(r.c>='D'&&x.c>='D')) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if((r.c<='C'&&x.c<='C'&&abs(int(r.c)-int(x.c))==1)||(r.c>='D'&&x.c>='D')) cout<<1;
	else cout<<0;
	return 0;
}
