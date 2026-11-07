#include<bits/stdc++.h>
#define fun {cout<<1; flag++;} else cout<<0; 
using namespace std;

string c1,c2,s1,s2;
int flag=0;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) fun
	if(flag==1&&s1[0]==s2[0]&&s1[1]==s2[1]) fun
	if(flag==2&&s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D') fun
	if(flag==3&&((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')||(s1[2]+1==s2[2])||(s2[2]+1==s1[2]))) fun
	return 0;
} 
