#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,r1,r2;
	char l1,l2;
	cin>>c1>>s1>>c2>>s2;
	r1=s1.substr(0,2);
	r2=s2.substr(0,2);
	l1=s1[2];
	l2=s2[2];
	cout<<(c1==c2);
	if(c1==c2 && r1==r2) cout<<1;
	else cout<<0;
	if(c1==c2 && r1==r2){
		if((l1<='C' && l2<='C') || (l1>='D' && l2>='D')) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	if(c1==c2 && r1==r2){
		if((l1=='A' && l2=='B') || (l1=='B' && l2=='A') || (l1=='B' && l2=='C') || (l1=='C' && l2=='B') || (l1=='D' && l2=='F') || (l1=='F' && l2=='D')) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
} 
