#include<bits/stdc++.h>
using namespace std;
string s1,s2;
bool x[5];
int a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a==b){
		x[0]=1;
	}else{
		for(int i=0;i<4;i++){
			cout<<x[i];
		}
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		x[1]=1;
	}else{
		for(int i=0;i<4;i++){
			cout<<x[i];
		}
		return 0;
	}
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')){
		x[2]=1;
	}else if((s1[2]=='D'&&s2[2]=='F')||s1[2]=='F'&&s2[2]=='D'){
		x[2]=1;
	}else{
		for(int i=0;i<4;i++){
			cout<<x[i];
		}
		return 0;
	}
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='F'&&s2[2]=='D')){
		x[3]=1;
	}else{
		for(int i=0;i<4;i++){
			cout<<x[i];
		}
		return 0;
	}
	for(int i=0;i<4;i++){
		cout<<x[i];
	}
	return 0;
}