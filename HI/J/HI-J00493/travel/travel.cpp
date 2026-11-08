#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	int a=0,b=0,c=0,d=0,sum=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		a=1;
		sum++;
	}
	
	if(sum==1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		b=1;
		sum++;
	}
	
	if(sum==2&&((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C'))||((s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'&&s2[2]<='F'))){
		c=1;
		sum++;
	}
	
	if(sum==3&&(s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'&&s2[2]<='F')){
		d=1;
	}
	else if(sum==3&&((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B'))){
		d=1;
	}
	cout<<a<<b<<c<<d;
	return 0;
}
