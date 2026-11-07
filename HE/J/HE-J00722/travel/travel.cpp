#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,a,b;
	char s1,s2;
	cin>>c1>>a>>s1>>c2>>b>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(a!=b){
		cout<<"1000";
		return 0;
	}
	if(s1=='C'&&s2=='D'){
		cout<<"1100";
		return 0;
	}
	if(s1=='D'&&s2=='C'){
		cout<<"1100";
		return 0;
	}
	int e=s1-'0';
	int f=s2-'0';
	if(e-f==1||f-e==1){
		cout<<"1111";
	}else{
		cout<<"1110";
	}
	return 0;
}
