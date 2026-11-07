#include<bits/stdc++.h>
using namespace std;
int a,b;
string s1,s2;
int main(){
	//freopen
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a!=b){
		puts("0000");
		return 0;
	}
	cout<<1;
	a=10*(s1[0]-'0')+s1[1]-'0';
	b=10*(s2[0]-'0')+s2[1]-'0';
	if(a!=b){
		puts("000");
		return 0;
	}
	cout<<1;
	a=s1[2]-'A'+1;b=s2[2]-'A'+1;
	if(a>3&&b>3){
		puts("11");
	}
	else if(a<=3 && b<=3){
		if(abs(b-a)<=1){
			puts("11");
		}
		else puts("10");
	}
	else puts("00");
	return 0;
}
