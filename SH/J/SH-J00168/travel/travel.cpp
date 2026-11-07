#include<bits/stdc++.h>
using namespace std;

int c1,c2;
string s1,s2; 

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	int t1=(s1[0]-'0')*10+(s1[1]-'0');
	int t2=(s2[0]-'0')*10+(s2[1]-'0');
	if(t1==t2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	char p1=s1[2],p2=s2[2];
	if('A'<=p1&&'C'>=p1&&'A'<=p2&&'C'>=p2){
		cout<<"1";
	}else if((p1=='D'&&p2=='F')||(p1=='F'&&p2=='D')){
		cout<<"11";
		return 0;
	}else{
		cout<<"00";
		return 0;
	}
	if(p1==p2-1||p2==p1-1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}

