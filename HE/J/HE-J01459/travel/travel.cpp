#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int num_a,num_b;
	string sa,sb;
	cin>>num_a>>sa>>num_b>>sb;
	//0000同车箱
	if(num_a!=num_b){
		cout<<"0000";
		return 0;
	} 
	//1000同车箱且同排
	if(sa[0]!=sb[0]||sa[1]!=sb[1]){
		cout<<"1000";
		return 0;
	} 
	//1100同车箱且同排且同侧 
	char x=sa[2],y=sb[2];
	if(x=='A'&&(y=='D'||y=='F')||
	   x=='B'&&(y=='D'||y=='F')||
	   x=='C'&&(y=='D'||y=='F')||
	   y=='A'&&(x=='D'||x=='F')||
	   y=='B'&&(x=='D'||x=='F')||
	   y=='C'&&(x=='D'||x=='F')){
	   	cout<<"1100";
	   	return 0;
	   }
	// 1110同车箱且同排且同侧且相邻
	if(abs(x-y)==1) cout<<"1111";
	else cout<<"1110";
	return 0;
} 
