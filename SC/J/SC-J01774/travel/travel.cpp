#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f1=0,f2=0,f3=0;
	if(c1==c2){
		f1=1;
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&f1){
		f2=1;
		cout<<1;
	} 
	else{
		cout<<0;
	} 
	if(s1[2]<='C'&&s2[2]<='C'&&f1&&f2||s1[2]>'C'&&s2[2]>'C'&&f1&&f2){
		cout<<1;
		f3=1;
	}
	else cout<<0;
	if(abs((s1[2]-'A')-(s2[2]-'A'))==1&&f1&&f2&&f3) cout<<1;
	else cout<<0;
	return 0;
}