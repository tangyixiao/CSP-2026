#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) a=1;
	if(a==1||s1[0]+s1[1]!=s2[0]+s2[1]) b=1;
	if(a==1||b==1||s1[2]<='C'&&s2[2]>='D'||s1[2]>='D'&&s2[2]<='C') c=1;
	if(a==1||b==1||c==1||abs(int(s1[2]-s2[2]))!=1) d=1;
	if(a==1) cout<<'0';
	if(a==0) cout<<'1';
	if(b==1) cout<<'0';
	if(b==0) cout<<'1';
	if(c==1) cout<<'0';
	if(c==0) cout<<'1';
	if(d==1) cout<<'0';
	if(d==0) cout<<'1';
	return 0; 
} 