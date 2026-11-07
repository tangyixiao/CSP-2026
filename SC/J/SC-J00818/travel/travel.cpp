#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int f=0,g=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1"; g=1;
	}
	if(g==0) cout<<"0"; 
	if(s1[2]<='C'&&s2[2]<='C'&&s1[2]>='A'&&s2[2]>='A'&&g==1){
		cout<<"1";
		f=1;
	}
	
	if(s1[2]<='F'&&s2[2]<='F'&&s1[2]>='D'&&s2[2]>='D'&&g==1){
		cout<<"1";
		f=1;
	}
	if(f==0) cout<<"0";
	int r=0;
	if(g==1&&f==1&&abs(s1[2]-s2[2]<=1)){
		cout<<"1";
		r=1;
	} 
	//if(g==0||f==0||abs(s1[2]-s2[2]!=1))  cout<<"0";
	if(r==0) cout<<"0";
	return 0;
}