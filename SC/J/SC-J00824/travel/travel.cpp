#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a2,b2;
	int a1,b1;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1)cout<<'1';
	else{
		cout<<"0000"<<endl;
		return 0;
	}
	if(a2[1]==b2[1])cout<<'1';
	else{
		cout<<"000"<<endl;
		return 0;
	}
	if(((a2[2]<='C'&&a2[2]>='A')&&(b2[2]<='C'&&b2[2]>='A'))||((a2[2]<='E'&&a2[2]>='D')&&(b2[2]<='E'&&b2[2]>='D')))cout<<'1';
	else{
		cout<<"00"<<endl;
		return 0;
	}
	if(abs(a2[2]-b2[2])==1)cout<<'1';
	else{
		cout<<'0'<<endl;
		return 0;
	}
	return 0;
}