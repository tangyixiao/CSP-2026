#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int pd=0;
int main(){
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a1==b1 && a2[0]+a2[1]==b2[0]+b2[1]){
		cout<<1;
	}else{
		cout<<0; 
	}if(a1==b1 && a2[0]+a2[1]==b2[0]+b2[1] && (( int(a2[2])>=65 && int(a2[2])<=67 && int(b2[2])>=65 && int(b2[2])<=67) || (int(a2[2])>=68 && int(a2[2])<=69 && int(b2[2])>=68 && int(b2[2])<=69))){
		cout<<1;
		pd=1;
	}else{
		cout<<0;
	}if(pd==1 && abs(int(a2[2])-int(b2[2]))==1){
		cout<<1;
	}else{
		cout<<0;
	}return 0;
}