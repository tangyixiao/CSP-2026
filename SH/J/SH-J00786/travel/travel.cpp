#include<bits/stdc++.h>
using namespace std;
#define N 222222
void open(string s){
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}
string c1,s1,c2,s2;
bool ans=1;
int main(){
	open("travel");
	cin>>c1>>s1>>c2>>s2;
	ans&=c1==c2;
	cout<<ans;
	ans&=s1.substr(0,2)==s2.substr(0,2);
	cout<<ans;
	ans&=(s1[2]>'C')^(s2[2]<='C');
	cout<<ans;
	ans&=!(s1[2]=='A'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A');
	cout<<ans;
}