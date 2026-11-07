#include<bits/stdc++.h>
using namespace std;
long long c1,c2,a,b,f,f1,f2,f3;
char s1,s2;
int main(){
	freopen("traval.in","r",stdin);
	freopen("traval.out","w",stdout);
	cin>>c1>>a>>s1>>c2>>b>>s2;
	if(c1==c2){
		f=1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(a==b){
		f1=1;
	}else{
		cout<<"1000";
		return 0;
	}
	if(s1=='F'&&s2=='D'||s1=='D'&&s2=='F'){
		f2=1;
	}else if(s1<='C'&&s1>=&&s2<='C'&&s2>='A'){
		f2=1;
	}else{
		cout<<"1100";
		return 0;
	}
	if(s1==s2-1||s1==s2+1){
		cout<<"1111";
	}else{
		cout<<"1110";
	}
	return 0;
}