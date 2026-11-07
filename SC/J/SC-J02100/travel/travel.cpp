#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
long long a,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=(c1[0]-'0')*10+(c1[1]-'0');
	c=(c2[0]-'0')*10+(c2[1]-'0');
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	a=(s1[0]-'0')*10+(s1[1]-'0');
	c=(s2[0]-'0')*10+(s2[1]-'0');
	if(a!=c){
		cout<<"1000";
		return 0;
	}
	if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')){
	}else{
		cout<<"1100";
		return 0;
	}
	if(abs(s1[2]-s2[2])!=1){
		cout<<"1110";
	}else{
		cout<<"1111";
	}
	return 0;
}