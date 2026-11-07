#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
string o(string a){
	if(a[2]=='F')a[2]='E';
	return a;
}
int i(char c){
	return c-'0';
}
int ab(int a){
	if(a<0)return -a;
	return a;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>a1>>a2>>b1>>b2;
	a2=o(a2);
	b2=o(b2);
	if(a1!=b1){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(a2[0]==b2[0]&&a2[1]==b2[1]){
		cout<<1;
		if((a2[2]<='C'&&b2[2]<='C')||(a2[2]>='D'&&b2[2]>='D'))cout<<1;
		else cout<<0;
	}
	else cout<<"00";
	int ai=i(a2[0])*10+i(a2[1]),bi=i(b2[0])*10+i(b2[1]);
	cout<<((ab(int(a2[2]-b2[2]))==1&&ai==bi)||(ab(ai-bi)==1&&a2[2]==b2[2]));
	return 0;
}
