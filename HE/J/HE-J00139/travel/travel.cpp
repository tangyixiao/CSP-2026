#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio();
	cin.tie();
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int aa,bb;
	char xx1,xx2,yy1,yy2;
	xx1=s1[0];xx2=s1[1];yy1=s2[0];yy2=s2[1];
	//cout<<xx1<<xx2<<yy1<<yy2;
	aa=(xx1-'0')*10+xx2-'0';
	bb=(yy1-'0')*10+yy2-'0';
	int sum=abs((aa)-(bb));
	bool fff=false;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		fff=true;
		cout<<1;
	}
	else{
		cout<<0;
	}
	/////////////////
	bool flag=false;
	if(fff&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1; 
		flag=true;
	}
	else{
		cout<<0;
	}
	//cout<<flag<<endl;
	////////////////
	char x1=s1[2];
	char x2=s2[2];
	//cout<<x1<<" "<<x2;
	bool a=((x1=='D'||x1=='C')&&(x2=='C'||x2=='D'));
	bool b=((x2=='A'||x2=='B'||x2=='C'||x2=='D')||(x1=='A'||x1=='B'||x1=='C'||x1=='D'));
	bool c=((x1=='D')&&(x2=='F')||(x1=='F')&&(x2=='D'));
	if(a==1) a=0;
	else a=1;
	//cout<<endl<<a<<" "<<b<<" "<<c<<" "<<fff<<" "<<flag<<" ";
	if(fff&&flag&&(b||c)&&a){
		cout<<1;
	}
	else{
		cout<<0;
	}
	////////////////
	bool d=((x1=='C')&&(x2=='D'))||((x2=='C')&&(x1=='D'));
	
	//cout<<aa<<" "<<bb<<" "<<sum<<endl;
	if(fff&&flag&&((abs((x1-'A')-(x2-'A'))==1)&&(!d))||(sum==1&&s1[2]==s2[2])){
		cout<<1;
	}
	else{
		cout<<0;
	}
	//cout<<x1<<endl<<x2<<endl<<abs((x1-'A')-(x2-'A'));
	return 0;
}
