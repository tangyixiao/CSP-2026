#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cout<<1;
		int a=0;
		for(int i=0;i<2;i++){
			a*=10;
			a+=s2[i]-'0';
		}
		int b=0;
		for(int i=0;i<2;i++){
			b*=10;
			b+=s4[i]-'0';
		}
		if(a==b){
			cout<<1;
		}
		else{
			cout<<"000";
			return 0;
		}
		if((s2[2]=='D'&&s4[2]=='C')||(s2[2]=='C'&&s4[2]=='D')){
			cout<<"00";
			return 0;
		}
		else
		cout<<1;
		int t=abs(s2[2]-s4[2]);
		if(t==1)
		cout<<1;
		else
		cout<<0;
	}
	else{
		cout<<"0000";
		return 0; 
	}
	return 0;
}
