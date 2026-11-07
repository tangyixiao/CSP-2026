#include<bits/stdc++.h>
using namespace std;
int main(){

	string s1,s2,s3,s4;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>s3>>s1;
	cin>>s4>>s2;
	if(s3!=s4){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((s1[2]<='C'&&s2[2]>'C')||(s2[2]<='C'&&s1[2]>'C')){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(abs((int)(s1[2]-s2[2]))==1||(s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F')){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
} 
