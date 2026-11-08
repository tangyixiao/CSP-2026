#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int n,m,cnt,sum;
int main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if((s2[2]=='D'&&s4[2]=='F')||(s2[2]=='F'&&s4[2]=='D')){
		cout<<"1111";
		return 0;
	}
	for(int i=0;i<2;i++){
		if(s1[i]==s3[i]){
			cnt++;
		}
	}
	if(cnt==2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	cnt=0;
	for(int i=0;i<2;i++){
		if(s2[i]==s4[i]){
			cnt++;
		}
	}
	if(cnt==2){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	n=s2[2];
	m=s4[2];
	if(n<='C'&&m<'C'){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(n=='B'||m=='B'){
		cout<<1;
	}
	else{
		cout<<"0";
		return 0;
	}
	return 0;
}
