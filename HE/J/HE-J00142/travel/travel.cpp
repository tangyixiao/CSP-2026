#include<bits/stdc++.h>
using namespace std;
int c1,c2,s1,s2;
char s01,s02;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>s01>>c2>>s2>>s02;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1==s2&&c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if((s01=='A'&&s02=='B'||s01=='A'&&s02=='C'||s01=='B'&&s02=='C'||s02=='A'&&s01=='B'||s02=='A'&&s01=='C'||s02=='B'&&s01=='C'||s01=='D'&&s02=='F'||s01=='F'&&s01=='D')&&s1==s2&&c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if((s01=='A'&&s02=='B'||s02=='A'&&s01=='B'||s01=='B'&&s02=='C'||s02=='B'&&s01=='C'||s01=='D'&&s02=='F'||s02=='D'&&s01=='F')&&s1==s2&&c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
