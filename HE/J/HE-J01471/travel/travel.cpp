#include <bits/stdc++.h>
using namespace std;
string a[4];
int c1,s1,c2,s2;
int main(){
	freopen("travel.in", "r" ,stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a[0]>>a[1]>>a[2]>>a[3]; 

	 
	c1=10*int(a[0][0]-'0')+int (a[0][1]-'0');
	s1=10*int(a[1][0]-'0')+int (a[1][1]-'0');
	c2=10*int(a[2][0]-'0')+int (a[2][1]-'0');
	s2=10*int(a[3][0]-'0')+int (a[3][1]-'0');
	
	int flag1=0,flag2=0;
	if(a[1][2]>=65&&a[1][2]<=67)flag1=1;
	if(a[3][2]>=65&&a[3][2]<=67)flag2=1;
	
	if(c1==c2)cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	
	if(s1==s2){
		cout<<1;
		if(flag1==flag2)cout<<1;
		else cout<<0; 
	}
	else {
		cout<<0<<0;
	}
	
	int x=int(a[1][2]);
	int y=int(a[3][2]);
	
	
	
	if((abs(s1-s2)==1&&x==y&&flag1==flag2)||(abs(x-y)==1&&s1==s2&&flag1==flag2))cout<<1;
	else cout<<0;
	
	
	//cout<<c1<<' '<<s1<<' '<<c2<<' '<<s2;
	return 0;
} 
