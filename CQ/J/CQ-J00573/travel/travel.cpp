#include<bits/stdc++.h>
using namespace std;
short a,b;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool po=1,po2=1,po3=1;
	cin>>a>>s1>>b>>s2;
	if(a==b) {
		cout<<1;
		po3=0;
		if(s1[0]==s2[0]&&s1[1]==s2[1]) {
		cout<<1;
		po=0;
		if(((s1[2]>=65&&s1[2]<=67)&&(s2[2]>=65&&s2[2]<=67))||((s1[2]>=68&&s1[2]<=69)&&(s2[2]>=68&&s2[2]<=69))){
			cout<<1;
			po2=0;
			if(int(s1[2])-int(s2[2])==1||int(s1[2])-int(s2[2])==-1){
				cout<<1;
			}else{
			cout<<0;
			}	
		}else{
		cout<<0;
		}	
	}else{
	cout<<0;
	}
	}else{
	cout<<0;
	}
	if(po3) cout<<0;
	if(po) cout<<0;
	if(po2) cout<<0;
	return 0;
}
