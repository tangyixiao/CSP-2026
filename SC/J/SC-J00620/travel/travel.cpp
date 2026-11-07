#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else cout<<0;
	int a1=s1[0]-'0'+s1[1]-'0';
	int a2=s2[0]-'0'+s2[1]-'0';
	if(a1==a2 and c1==c2)cout<<1;
	else cout<<0;
	int b1=s1[2]-'0';
	int b2=s2[2]-'0';
	if(a1==a2 and c1==c2 and ((b1<=19 and b2<=19) or(b1>19 and b1<=21 and b2>19 and b2<=21))){
		cout<<1;
	}
	else cout<<0;
	if(a1==a2 and c1==c2 and ((b1<=19 and b2<=19) or(b1>19 and b1<=21 and b2>19 and b2<=21))and (b1+1==b2 or b2+1==b1)){
		cout<<1;
	}
	else cout<<0;
	return 0;
}