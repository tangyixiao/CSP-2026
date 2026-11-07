#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool one=0,two=0,three=0,four=0;
bool fun1(){
	if(s1[0]==s2[0] && s1[1]==s2[1])
		return 1;
	else
		return 0;
}
bool fun2(){
	bool zsn=0,ljh=0;
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C')
		zsn=1;
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C')
		ljh=1;
	if(zsn==ljh)
		return 1;
	else
		return 0;
}
bool fun3(){
	char x,y;
	x=s1[2];
	y=s2[2];
	if(x+1==y || x-1==y)
		return 1;
	else
		return 0;
} 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		one=1;
		if(fun1()){
			two=1;
			if(fun2()){
				three=1;
				if(fun3()){
					four=1;
				}
			}
		}
	}
	cout<<one<<two<<three<<four;
	return 0;
}
