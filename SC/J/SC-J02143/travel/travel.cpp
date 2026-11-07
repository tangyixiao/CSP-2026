#include<bits/stdc++.h>
using namespace std;
int a1,b1,a2,b2;
char c1,c2;
int check(char c){
	if(c<='C')return 1;
	else return 2;
}
int calc(char c1,char c2){
	if(c1=='D'&&c2=='F')return 1;
	if(c1=='F'&&c2=='D')return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	if(a1==a2)cout<<1;
	else cout<<0;
	if(a1==a2&&b1==b2)cout<<1;
	else cout<<0;
	if(a1==a2&&b1==b2&&check(c1)==check(c2))cout<<1;
	else cout<<0;
	if(a1==a2&&b1==b2&&check(c1)==check(c2)&&(abs(c1-c2)==1||calc(c1,c2)))cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}