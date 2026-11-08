#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		printf("1");
	}
	else{
		printf("0000");
		return 0;
	}
	if(a2[0]==b2[0]&&a2[1]==b2[1]){
		printf("1");
	}
	else{
		printf("000");
		return 0;
	}
	if((a2[2]>='D'&&b2[2]>='D')||(a2[2]<='C'&&b2[2]<='C')){
		printf("1");
	}
	else{
		printf("00");
		return 0;
	}
	int x=a2[2]-'A',y=b2[2]-'A';
	if(abs(x-y)==1){
		printf("1");
	}
	else{
		printf("0");
	}
}
