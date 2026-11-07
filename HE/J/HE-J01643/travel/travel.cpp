#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long a,b;
	string azuo,bzuo;
	cin>>a>>azuo>>b>>bzuo;
	if(a==b) cout<<"1";
	else cout<<"0";
	string a1=azuo.end();
	string b1=bzuo.end();
	string a2=azuo.pop(a1);
	string b2=bzuo.pop(b1);
	if(a2==b2) cout<<"1";
	else cout<<"0";
	if(a1=='A'&&b1=='B' || a1=='A'&&b1=='C' || a1=='B'&&b1=='A' || a1=='B'&&b1==='C' || a1=='C'&&b1=='A' || a1=='C'&&a1=='B' || a1=='D'&&b1=='F' || a1=='F'&&b1=='D') cout<<"1"; cout<<"1";
	else cout<<"0";
	if(a1+'0'==b1+'1'&&a1!='C'&&b1!='D'&&a1!='D'&&b1!='C') cout<<"1";
	else cout<<"0";
	return 0;
}
