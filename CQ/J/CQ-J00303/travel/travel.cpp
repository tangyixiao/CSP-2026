#include<bits/stdc++.h>
using namespace std;
string r1,r2,x1,x2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r1>>r2>>x1>>x2;
	if(r1!=x1){
		cout<<"0000";
		return 0;
	}
	cout<<'1';
	string s1=r2.substr(0,2);
	string s2=x2.substr(0,2);
	if(s1!=s2){
		cout<<"000";
		return 0;
	}
	cout<<'1';
	char c1=r2[2],c2=x2[2];
	bool bj1=(c1>='D');
	bool bj2=(c2>='D');
	if(bj1!=bj2){
		cout<<"00";
		return 0;
	}
	cout<<'1';
	if((c1=='C'&&c2=='A')||(c1=='A')&&(c2=='C')) cout<<'0';
	else cout<<'1';
	return 0;
} 
