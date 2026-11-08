#include<bits/stdc++.h>
using namespace std;
int s1,s2;
string c1,c2;
char a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>c1>>s2>>c2;
	if(s1!=s2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	int z1=0,z2=0;
	for(int i=0;i<=1;i++){
		z1=z1*10+c1[i]-'0';
		z2=z2*10+c2[i]-'0';
	}
	if(z1!=z2){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	a1=c1[2];
	a2=c2[2];
	if(!(a1>='D'&&a2>='D')&&!(a1<='C'&&a2<='C')){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(a1+1==a2||a1-1==a2){
		cout<<"1";
	}else{
		cout<<"0";
	}
return 0;
} 
