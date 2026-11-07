#include<bits/stdc++.h>
using namespace std;

string s1,s2,s3,s4;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	}
	int a=0,b=0;
	for(int i=0;i<2;i++){
		a=a*10+s2[i]-'0';
		b=b*10+s4[i]-'0';
	}
	if(a!=b){
		cout<<"1000";
		return 0;
	}
	int c=(s2[2]<='C'),d=(s4[2]<='C');
	if(c!=d){
		cout<<"1100";
		return 0;
	}
	if(s2[2]-s4[2]==1||s2[2]-s4[2]==-1){
		cout<<"1111";
		return 0;
	}else cout<<"1110";
	
	
	return 0;
} 