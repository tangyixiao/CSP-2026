#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,s[100],m;
	char d[2],q='A';
	for(int i=0;i<2;i++){
		for(int j=0;j<1;j++){
			cin>>s[i];
		}
		cin>>d[i];
	}
	if(s[0]==s[1]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	for(int i=0;i<=12;i++){
	if(d[0]-i==d[1]){
		cout<<"1";
		m=1;
	}else{
		cout<<"0";
		}
	}
	for(int i=0;i<=12;i++){
		if(d[0]-q==d[1]){
		cout<<"1";
		m=1;
	}else{
		cout<<"0";
		}
		q++;
	}
	if(m>0){
		cout<<"1";
	}else{
		cout<<"0";
		}
	}

