#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2;
string p1,p2;
char zw1,zw2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	p1=s1.substr(0,2);
	p2=s2.substr(0,2);
	zw1=s1[2];
	zw2=s2[2];
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(p1==p2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(zw1=='A'||zw1=='B'||zw1=='C'){
		if(zw2=='A'||zw2=='B'||zw2=='C'){
			cout<<1;
			if(zw1==zw2-1||zw2==zw1-1){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else{
			cout<<0<<0;
		}
	}
	else if(zw1=='D'||zw1=='E'){
		if(zw2=='D'||zw2=='E'){
			cout<<1;
			if(zw1==zw2-1||zw2==zw1-1){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else{
			cout<<0<<0;
		}
	}
	return 0;
}
