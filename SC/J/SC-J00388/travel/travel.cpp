#include<bits/stdc++.h>
#include<cstdio>
#include<stdio.h>
using namespace std;
int cr,cx;
int pr,px;
char zr,zx;
bool q1,q2,q3,q4;
bool is_sli(char x,char y){
	if((x=='D'&&y=='F')||(x=='F'&&y=='D'))return 1;
	if((x=='A'&&y=='B')||(x=='B'&&y=='A')||(x=='B'&&y=='C')||(x=='C'&&y=='B')||(x=='A'&&y=='C')||(x=='C'&&y=='A'))return 1;
	return 0;
}
bool is_nea(char x,char y){
	if((x=='D'&&y=='F')||(x=='F'&&y=='D'))return 1;
	if((x=='A'&&y=='B')||(x=='B'&&y=='A')||(x=='B'&&y=='C')||(x=='C'&&y=='B'))return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>pr>>zr>>cx>>px>>zx;
	if(cr==cx)q1=1;
	if(q1&&pr==px)q2=1;
	if(q2&&is_sli(zr,zx))q3=1;
	if(q3&&is_nea(zr,zx))q4=1;
	cout<<q1<<q2<<q3<<q4;
	return 0;
}