#include<bits/stdc++.h>
using namespace std;
int a1,a2,b1,b2;
char c1,c2;
int main(){
	//freopen ("travel.in", "r",stdin);
	//freopen ("travel.out", "w",stdout);
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	if(a1==a2){
		cout<<1;
	}else{
		cout<<0000;
		return 0;
	}if(b1==b2){
		cout<<1;
	}else{
		cout<<000;
		return 0;
	}if(a='A'&&(b='B'||b='C')){
		cout<<1;
	}
	if(b='A'&&(a='A'||a='C')){
		cout<<1;
	}if(a='B'&&(b='A'||b='C')){
		cout<<1;
	}if(a='B'&&(b='A'||b='C')){
		cout<<1;
	}if(a='C'&&(b='A'||b='B')){
		cout<<1;
	}
	if(a='C'&&(b='B'||b='C')){
		cout<<1;
	}if(a='D'&&(b='B'||b='C')){
		cout<<1;
	}
	if()
}
