#include<bits/stdc++.h>
using namespace std;
//bool op1,op2,op3,op4;
int c1,c2,c3,c4,c5,c6;//c1,c2³µÏáºÅ£¬c3,c4,ÅÅºÅ£¬c5,c6,ÁĞºÅ 
string s1,s2;
int to_num(char x){
	if(x=='A')return 1;
	if(x=='B')return 2;
	if(x=='C')return 3;
	if(x=='D')return 5;
	if(x=='F')return 6;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		puts("0000");
		return 0;
	}
	c3=(s1[0]-'0')*10+s1[1]-'0';
	c4=(s2[0]-'0')*10+s2[1]-'0';
	if(c3!=c4){
		puts("1000");
		return 0;
	}
	c5=to_num(s1[2]);
	c6=to_num(s2[2]);
	if(!((c5<4&&c6<4)||(c5>4&&c6>4))){
		puts("1100");
		return 0;
	}
	if(abs(c5-c6)!=1){
		puts("1110");
		return 0;
	}
	puts("1111");
	return 0;
}
