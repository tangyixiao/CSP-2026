#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
string c1,c2;
int a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>c1>>a2>>c2;
	if(a1!=a2){
		cout<<"0000";
		return 0;
	}
	int b1=(c1[0]-'0')*10+c1[1]-'0';
	int b2=(c2[0]-'0')*10+c2[1]-'0';
	if(b1!=b2){
		cout<<"1000";
		return 0;
	}
	int d1=c1[2]-'A';
	int d2=c2[2]-'A';
	if(d1<=2&&d2>=3||d1>=3&&d2<=2){
		cout<<"1100";
		return 0;
	}
	if(d1-d2!=1&&d2-d1!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
