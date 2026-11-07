#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int a=0;int b=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>c2>>s1>>s2;

	if(c2[2]=='A'){
		a=0;
	}
	if(c2[2]=='B'){
		a=1;
	}
	if(c2[2]=='C'){
		a=2;
	}
	if(c2[2]=='D'){
		a=4;
	}
	if(c2[2]=='F'){
		a=5;
	}
	if(s2[2]=='A'){
		b=0;
	}
	if(s2[2]=='B'){
		b=1;
	}
	if(s2[2]=='C'){
		b=2;
	}
	if(s2[2]=='D'){
		b=4;

	}
	if(s2[2]=='F'){
		b=5;
	}
	if(c1==s1){
		cout<<1;
		if(c2[0]==s2[0] && c2[1]==s2[1]){
			cout<<"1";
			if(a<=2 and b<=2 || a>=4 and b>=4 ){
				cout<<"1";
				if(a+1==b || a-1==b ){
					cout<<"1";
				}else{
					cout<<"0";
				}
			    }else{
			    	cout<<"00";
				}
			}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}

}



