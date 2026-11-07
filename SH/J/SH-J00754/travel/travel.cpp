#include<bits/stdc++.h>
using namespace std;
	int c1,c2,num2,num1;
	string s1,s2;
	char s1s,s2s;
	bool flag1=0,flag2=0,flag3=0,flag4=0,side1,side2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) flag1=1;
	for(char v:s1){
		if(isdigit(v)){
			num1=num1*10+(v-'0');
		}
		else{
			s1s=v;
		}
	}
	for(char v:s2){
		if(isdigit(v)){
			num2=num2*10+(v-'0');
		}
		else{
			s2s=v;
		}
	}
	if(num1==num2&&flag1) flag2=1;
	
	if(s1s=='A'||s1s=='B'||s1s=='C') side1=1;
	if(s2s=='A'||s2s=='B'||s2s=='C') side2=1;
	
	if(side1==side2&&flag2) flag3=1;
	
	if(abs(s2s-s1s)==1&&flag3) flag4=1;
	
	cout<<flag1<<flag2<<flag3<<flag4;
	return 0;
} 
