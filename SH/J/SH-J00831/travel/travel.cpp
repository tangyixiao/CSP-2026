#include<bits/stdc++.h>
using namespace std;
int c1,c2,s1=0,s2=0,b=1;
char s11,s22;
void check1(){
	if(c1==c2){
		cout<<1;
	}
	else
	{
		cout<<"0000";
		b=0;
	}
}
void check2(){
	if(s1==s2){
		cout<<1;
	}
	else
	{
		cout<<"000";
		b=0;
	}
}
void check3(){
	if(((s11=='A'||s11=='B'||s11=='C')&&(s22=='A'||s22=='B'||s22=='C'))||((s11=='D'||s11=='E')&&(s22=='D'||s22=='E')))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		b=0;
	}
}
void check4(){
	if(s11=='D'||s11=='E'){
		cout<<1;
	}
	else if(s11=='B'||s22=='B'){
		cout<<1;
	}
	else
	{
		cout<<0;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	cin>>s11;
	s1+=(s11-'0')*10;
	cin>>s11;
	s1+=(s11-'0');
	cin>>s11;
	cin>>c2;
	cin>>s22;
	s2+=(s22-'0')*10;
	cin>>s22;
	s2+=(s22-'0');
	cin>>s22;
	check1();
	if(b==0){
		return 0;
	}
	check2();
	if(b==0){
		return 0;
	}
	check3();
	if(b==0){
		return 0;
	}
	check4();
	return 0;
}
