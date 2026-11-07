#include <bits/stdc++.h>
using namespace std;
#define ll long long
string c1,c2,s1,s2;
char gd1[3]={'A','B','C'};
bool ch(char a,char b){
	bool t1=0,t2=0;
	for(int i=0;i<3;i++){
		if(a==gd1[i]){
			t1=1;
		}
		if(b==gd1[i]){
			t2=1;
		}
	}
	if((t1&&t2)||(t1==0&&t2==0)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	string a1="",a2="";
	a1+=s1[0]+s1[1];
	a2+=s2[0]+s2[1];
	if(a1==a2){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	char b=s1[2],c=s2[2];
	if(ch(b,c)){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if(abs(b-c)==1&&ch(b,c)){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}