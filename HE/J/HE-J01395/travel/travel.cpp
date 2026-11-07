#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int cx1,cx2,p1,p2,zw[5]={66,67,-1,70,-1},a,b,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<c1.size();i++){
		cx1=cx1*10+c1[i]-48;
	}
	for(int i=0;i<c2.size();i++){
		cx2=cx2*10+c2[i]-48;
	}
	if(cx1==cx2){
		a=1;
		cout<<1;
	}
	else{
		cout<<0;
	}
	p1=(s1[0]-48)*10+s1[1]-48;
	p2=(s2[0]-48)*10+s2[1]-48;
	if(p1==p2&&a==1){
		b=1;
		cout<<1;
	}
	else{
		cout<<0;
	}
	int o=0;
	if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')&&a==1&&b==1){
		o=1;
		c=1;
		cout<<1;
	}
	if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')&&a==1&&b==1){
		o=1;
		c=1;
		cout<<1;
	}
	if(o==0){
		cout<<0;
	}
	if((zw[s2[2]-65]==s1[2]||zw[s1[2]-65]==s2[2])&&a==1&&b==1&&c==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
