#include<bits/stdc++.h>
using namespace std;
string c1;
string s1;
string c2;
string s2;
int a,b,c,d;
bool f=true;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int e1=(c1[0]-'0')+(c1[1]-'0');
	int e2=(c2[0]-'0')+(c2[1]-'0');
	int e3=(s1[0]-'0')+(s1[1]-'0');
	int e4=(s2[0]-'0')+(s2[1]-'0');
	if(e1==e2){
		cout<<f;
	}else{
		cout<<"0000";
		return 0;
	}
	if(e3==e4){
		cout<<f;
	}else{
		cout<<"000";
		return 0;
	}
	char e5=s1[2];
	char e6=s2[2];
	if((e5<'D'&&e5>='A'&&e6<'D'&&e6>='A')||(e5>='D'&&e5<='F'&&e6>='D'&&e6<='F')){
		cout<<f;
	}else{
		cout<<"00";
		return 0;
	}
	int e7,e8;
	e7=e5;
	e8=e6;
	if(e7-1==e8||e7+1==e8){
		cout<<f;
	}else{
		cout<<"0";
		return 0;
	}
	return 0;
}
