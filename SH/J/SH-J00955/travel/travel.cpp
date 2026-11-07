#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int flag[10]={};
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int cx1=0,cx2=0;
	for(int i=0;i<2;i++){
		cx1=(c1[i]-'0')+cx1*10;
		cx2=(c2[i]-'0')+cx2*10;
	}
	if(cx1==cx2)	flag[1]=1;
	int wz1=0,wz2=0;
	for(int i=0;i<2;i++){
		wz1=(s1[i]-'0')+wz1*10;
		wz2=(s2[i]-'0')+wz2*10;
	}
	if(wz1!=wz2||flag[1]==0){
		flag[2]=0;
		flag[3]=0;
		flag[4]=0;
	}
	else{
		flag[2]=1;
		char a=s1[2];
		char b=s2[2];
		if((b<='C'&&a<='C')||(a>='D'&&b>='D'))	flag[3]=1;
		int js=a-b;
		if(abs(js)==1&&flag[3]==1)	flag[4]=1;
	}
	for(int i=1;i<=4;i++){
		if(flag[i]){
			cout<<1;
		}
		else	cout<<0;
	}
	return 0;
}
