#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	
	cin>>c1>>s1>>c2>>s2;
	
	if(c1!=c2){
		puts("0000");
		return 0;
	}
	
	int a1=(s1[0]-'0')*10+s1[1]-'0';
	int a2=(s2[0]-'0')*10+s2[1]-'0';
	
	if(a1!=a2){
		puts("1000");
		return 0;
	}
	
	int b1,b2,flag1,flag2;
	
	if(s1[2]=='A'){
		b1=1;flag1=1;
	}
	if(s1[2]=='B'){
		b1=2;flag1=1;
	}
	if(s1[2]=='C'){
		b1=3;flag1=1;
	}
	if(s1[2]=='D'){
		b1=4;flag1=2;
	}
	if(s1[2]=='F'){
		b1=5;flag1=2;
	}
	
	if(s2[2]=='A'){
		b2=1;flag2=1;
	}
	if(s2[2]=='B'){
		b2=2;flag2=1;
	}
	if(s2[2]=='C'){
		b2=3;flag2=1;
	}
	if(s2[2]=='D'){
		b2=4;flag2=2;
	}
	if(s2[2]=='F'){
		b2=5;flag2=2;
	}
	
	if(flag1!=flag2){
		puts("1100");
		return 0;
	}
	
	if(abs(b1-b2)+abs(a1-a2)>1){
		puts("1110");
		return 0;
	}	
	
	puts("1111");
	return 0;
}
