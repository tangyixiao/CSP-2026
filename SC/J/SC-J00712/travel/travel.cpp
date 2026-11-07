#include<bits/stdc++.h>
using namespace std;
struct sit{
	int c,s;
	char x;
}a[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string b;
	cin>>a[1].c>>b;
	a[1].x=b[2],a[1].s=int((b[0]-'0')+(b[1]-'0'));
	cin>>a[2].c>>b;
	a[2].x=b[2],a[2].s=int((b[0]-'0')+(b[1]-'0'));
	if(a[1].x>a[2].x) swap(a[1].x,a[2].x);
	if(a[1].c==a[2].c) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(a[1].s==a[2].s) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(a[1].x<='C'&&a[2].x>'C'||a[1].x=='C'&&a[2].x=='D'){
		cout<<"00";
		return 0;
	}else cout<<1;
	if(a[1].x+1==a[2].x) cout<<1;
	else cout<<0;
	return 0;
}