#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(s2[0]!=s4[0] || s2[1]!=s4[1]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((s2[2]<='C' && s4[2]>'C') || (s2[2]>'C' && s4[2]<='C')){
		cout<<"00"<<'\n';
		return 0;
	}
	cout<<1;
	char a=s2[2],b=s4[2];
	if(a+1==b || b+1==a) cout<<1;
	else cout<<0;
}