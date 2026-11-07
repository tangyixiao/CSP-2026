#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2; 
string use1,use2;
char user1,user2;
bool e1,e2,e3;
bool check(char a,char b){
	bool ak1=(a<='C'&&a>='A')||(b<='C'&&b>='A');
	bool ak2=(a<='F'&&a>='D')||(b<='F'&&b>='D');
	return (ak1==1&&ak2==0)||(ak1==0&&ak2==1);
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
		e1=1;
	}
	use1=s1[0]+s1[1];
	use2=s2[0]+s2[1];
	user1=s1[2];
	user2=s2[2];
	if(e1==0&&use1==use2){
		cout<<1;
	}
	else{
		cout<<0;
		e2=1;
	}
	int a=abs(user1-user2);
	if(e1==0&&e2==0&&check(user1,user2)){
		cout<<1;
	}
	else{
		cout<<0;
		e3=1;
	}
	if(e1==0&&e2==0&&e3==0&&a<2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
