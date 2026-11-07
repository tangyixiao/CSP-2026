#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
		return 0;
	} 
	string c1,c2;
	c1=s2[0]+s2[1];
	c2=s4[0]+s4[1];
	if(c1!=c2){
		cout<<1000;
		return 0;
	}
	c1=s2[2];
	c2=s4[2];
	if(c1=="A"||c1=="B"||c1=="C"){
		if(c2!="D"&&c2!="F"){
			cout<<111;
		}else{
			cout<<1100;
			return 0;
		}
	}else{
		if(c2=="D"||c2=="F"){
			cout<<111;
		}else{
			cout<<1100;
			return 0;
		}
	}
	if(c1[0]-c2[0]==1||c1[0]-c2[0]==-1){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
}
