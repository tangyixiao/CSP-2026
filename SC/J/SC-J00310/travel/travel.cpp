#include<bits/stdc++.h>
using namespace std;
string a,s,b,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>b>>s2;
	int c1=0,c2=0;
	for(int i=0;i<2;i++){
		c1*=10;
		c1+=a[i];
		c2*=10;
		c2+=b[i];
	}
	if(c1!=c2){
		cout<<"0000"<<'\n';
		return 0;
	}
	cout<<1;
	int p1= 0,p2 = 0;
	for(int i=0;i<2;i++){
		p1*=10;
		p1+=s[i];
		p2*=10;
		p2+=s2[i];
	}
	if(p1!=p2){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(s[2]<='C' && s2[2]>'C' || s[2]>'C' && s2[2]<='C'){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(char(int(s[2])+1) == s2[2] || char(int(s[2])-1) == s2[2]){
		cout<<1;
	}else cout<<0;
	return 0;
}