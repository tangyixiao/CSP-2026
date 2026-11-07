#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cout<<(c1==c2);
	int z1,z2;
	z1=(s1[0]-'0')*10+(s1[1]-'0');
	z2=(s2[0]-'0')*10+(s2[1]-'0');
	cout<<(c1==c2&&z1==z2);
	/*
	侧变量: 0表示两个座位的那一侧，1表示三个座位的那一侧 
	*/
	bool y1,y2;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		y1=1;
	} 
	else y1=0;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		y2=1;
	}
	else y2=0;
	cout<<(c1==c2&&z1==z2&&y1==y2);
	/*
	座号相邻变量：AB BC DF 
	*/ 
	bool xianglin;
	if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')){
		xianglin=false;
	} 
	else if(abs(s1[2]-s2[2])==1) xianglin=true;
	else xianglin=false;
	
	cout<<(c1==c2&&z1==z2&&y1==y2&&xianglin);
	return 0;
}
