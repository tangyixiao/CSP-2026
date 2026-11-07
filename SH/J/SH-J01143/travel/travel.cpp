#include<bits/stdc++.h>
#define int long long
using namespace std;
int c1,c2;
string s1,s2;
int p1,p2;
char z1,z2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	p1=(s1[0]-'0')*10+(s1[1]-'0');
	p2=(s2[0]-'0')*10+(s2[1]-'0');
	z1=s1[2];
	z2=s2[2];
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	
	if(p1==p2){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	
	if(((z1=='A'||z1=='B'||z1=='C')&&(z2=='A'||z2=='B'||z2=='C'))||((z1=='D'||z1=='F')&&(z2=='D'||z2=='F'))){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(abs(z1-z2)==1){
		cout<<1;
	}
	else{
		cout<<"0";
		return 0;
	}
	return 0;
}
