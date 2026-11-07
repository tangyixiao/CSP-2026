#include<bits/stdc++.h>
using namespace std;
int a1,b1,c1,a2,b2,c2;
char s1[4],s2[4];
bool x=0,y=0,z=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a1>>s1[0]>>s1[1]>>s1[2]>>a2>>s2[0]>>s2[1]>>s2[2];
	b1=(s1[0]-48)*10+s1[1]-48;
	b2=(s2[0]-48)*10+s2[1]-48;
	if(a1==a2){
		cout<<1;
		z=1;
	}
	else cout<<0;
	if(b1==b2&&z){
		cout<<1;
		y=1;
	}
	else cout<<0;
	if(y&&((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||(((s1[2]=='D'||s1[2]=='F')&&(s1[2]=='D'||s1[2]=='F')))){
		cout<<1;
		x=1;
	} 
	else cout<<0;
	if(abs(s2[2]-s1[2])==1&&x) cout<<1;
	else cout<<0;
	return 0;
}