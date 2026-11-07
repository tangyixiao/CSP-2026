#include<bits/stdc++.h>
using namespace std;

bool check1(char a,char b){
	if(a>='D'&&a<='F'&&b>='D'&&b<='F')
		return 1;
	if(a>='A'&&a<='C'&&b>='A'&&b<='C')
		return 1;
	return 0;
}

bool check(char a,char b){
	if(a=='D'&&b=='F'||a=='F'&&b=='D')
		return 1;
	if(a=='C'&&b=='D'||a=='D'&&b=='C')
		return 0;
	if(abs(a-b)==1)
		return 1;
	return 0;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	bool flag1=0;
	
	if(c1==c2){
		cout<<1;
		flag1=1;
	}
	else{
		cout<<0;
	}
	
	bool flag=0;
	
	if(flag1==1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
		flag=1;
	}
	else{
		cout<<0;
	}
	
	if(flag1==1&&flag==1&&check1(s1[2],s2[2])){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	if(flag1==1&&flag==1&&check(s1[2],s2[2])){
		cout<<1;
	}
	else{
		cout<<0;
	}
	cout<<endl;
	
	return 0;
}
