#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
string c1,s1,c2,s2;
int main(){
	freopen("r","travel.in",stdin);
	freopen("w","travel.out",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	
	int x=(s1[0]-'0')*10+s1[1]-'0';
	int y=(s2[0]-'0')*10+s2[1]-'0';
	if(x==y)cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	
	char z1=s1[2],z2=s2[2];
	if(z1=='A'||z1=='B'||z1=='C'){
		if(z2=='A'||z2=='B'||z2=='C')cout<<1;
		else{
			cout<<"00";
			return 0;
		}
	}
	else {
		if(z2=='D'||z2=='F')cout<<1;
		else {
			cout<<"00";
			return 0;
		}
	}
	
	if(abs(z2-z1)==1)cout<<1;
	else cout<<'0';
	return 0;
}