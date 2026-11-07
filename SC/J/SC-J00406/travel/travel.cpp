#include <bits/stdc++.h>
using namespace std;
char c11,c12,c21,c22,s11,s12,s13,s21,s22,s23;
int two,one;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c11>>c12>>s11>>s12>>s13>>c21>>c22>>s21>>s22>>s23;
	if(c11==c21&&c12==c22){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	} 
	if(s11==s21&&s12==s22){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(s13=='A'){
		one=1;
	}else if(s13=='B'){
		one=2;
	}else if(s13=='C'){
		one=3;
	}else if(s13=='D'){
		one=4;
	}else{
		one=5;
	}
	if(s23=='A'){
		two=1;
	}else if(s23=='B'){
		two=2;
	}else if(s23=='C'){
		two=3;
	}else if(s23=='D'){
		two=4;
	}else{
		two=5;
	}
	if((one<4&&two<4)||(one>3&&two>3)){//同侧
		cout<<1;
	}else{//不同侧
		cout<<"00";
		return 0;
	}
	if(abs(one-two)==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}