#include<bits/stdc++.h>
using namespace std;
string c[3];
string a[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++){
		cin>>c[i];
		cin>>a[i];
	}
	if(c[1]==c[2]){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	string a1=a[1];
	a1=a1.substr(0,2);
	string b1=a[2];
	b1=b1.substr(0,2);
	if(a1==b1){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	string a2=a[1];
	a2=a2.substr(2,2);
	string b2=a[2];
	b2=b2.substr(2,2);
	if(a1==b1){
		if(a2<="C" and a2>="A" and b2<="C" and b2>="A"){
			cout<<1;
		}else{
			if(a2<="F" and a2>="D" and b2<="F" and b2>="D"){
				cout<<1;
			}else{
				cout<<0;
				cout<<0;
				return 0;
			}
		}
	}else{
		cout<<0;
		cout<<0;
		return 0;
	}
	if(a2>="A" and a2<="B" and b2>="A" and b2<="B"){
		cout<<1;
	}else if(a2>="B" and a2<="C" and b2>="B" and b2<="C"){
		cout<<1;
	}else if(a2>="D" and a2<="F" and b2>="D" and b2<="D"){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
