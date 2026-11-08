#include<bits/stdc++.h>
using namespace std;
string a,b;
int _a,_b;
char ca,cb;
int to_int(string s){
	stringstream ss;ss<<s;
	int temp;ss>>temp;
	return temp;
}
bool side(char ch){
	if(ch<='C')return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>_a>>a>>_b>>b;
	if(_a!=_b){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	_a=to_int(a.substr(0,2));
	_b=to_int(b.substr(0,2));
	ca=a[2],cb=b[2];
	if(_a!=_b){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(side(ca)!=side(cb)){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if((side(ca)&&abs(ca-cb)==1)||!side(ca))cout<<1;
	else cout<<0;
	return 0;
}
