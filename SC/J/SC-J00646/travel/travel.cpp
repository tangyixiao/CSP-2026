#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool flag=1;
	if(c1==c2){
		cout<<flag;
	}else{
		flag=0;
		cout<<flag;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<flag;
	}else{
		flag=0;
		cout<<flag;
	}
	if(s1[2]=='A'&&(s2[2]=='B'||s2[2]=='C')){
		cout<<flag;
	}else if(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C')){
		cout<<flag;
	}else if(s1[2]=='C'&&(s2[2]=='A'||s2[2]=='B')){
		cout<<flag;
	}else if(s1[2]=='D'&&s2[2]=='F'){
		cout<<flag;
	}else if(s1[2]=='F'&&s2[2]=='D'){
		cout<<flag;
	}else{
		flag=0;
		cout<<flag;
	}
	if(s1[2]=='A'&&s2[2]=='B'){
		cout<<flag;
	}else if(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C')){
		cout<<flag;
	}else if(s1[2]=='C'&&s2[2]=='B'){
		cout<<flag;
	}else if(s1[2]=='D'&&s2[2]=='F'){
		cout<<flag;
	}else if(s1[2]=='F'&&s2[2]=='D'){
		cout<<flag;
	}else{
		cout<<0;
	}
	return 0;
}