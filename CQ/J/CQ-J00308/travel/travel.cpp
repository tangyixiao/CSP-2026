#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int o(string s){
	int l=s.size();
	int z=0;
	for(int i=0;i<l-1;i++){
		z*=10;
		z+=s[i]-'0';
	}
	return z;
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
	}
	if(c1==c2&&o(s1)==o(s2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	int l=s1.size(),ll=s2.size();
	if(c1==c2&&o(s1)==o(s2)&&((s1[l-1]<='C'&&s2[ll-1]<='C')||(s1[l-1]>'C'&&s2[ll-1]>'C'))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&o(s1)==o(s2)&&((s1[l-1]<='C'&&s2[ll-1]<='C')||(s1[l-1]>'C'&&s2[ll-1]>'C'))&&abs(int(s1[l-1]-s2[ll-1]))==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
