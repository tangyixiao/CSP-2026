#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1=='01'  || c1=='16'){
		cout<<'0';
	}else{
		if(c1==c2){
			cout<<'1';
		}else{
			cout<<'0';
		}
	}
	string a=isdigit(s1);
	string b=isdigit(s2);
	if(a==b){
		cout<<'1';
	}else{
		cout<<'0';
	}
	string x=s1-a;
	string y=s2-b;
	if(x-'0'-(y-'0')!=1){
		cout<<'0';
	}else{
		if(x=='C' && y=='D' || x=='D' && y=='C'){
			cout<<'0';
		}else{
			cout<<'1';
		}
	}
	return 0;
}
