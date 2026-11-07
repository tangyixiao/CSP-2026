#include <bits/stdc++.h>
using namespace std;
int a,b,a1,b1;
char ax,bx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>ax>>b>>b1>>bx;
	if(a==b){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(a1==b1){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((ax<='C'&&ax>='A'&&bx<='C'&&bx>='A')||(ax>='D'&&ax<='F'&&bx>='D'&&bx<='F')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(abs(ax-bx)==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
