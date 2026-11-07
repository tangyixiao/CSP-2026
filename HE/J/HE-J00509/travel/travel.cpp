#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int x=s1[2]-'A'+1,r=s2[2]-'A'+1;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s1[1]==s2[1] && s1[0]==s2[0]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((x>=1 && x<=3 && r>=1 && r<=3) || (x>=4 && x<=6 && r>=4 && r<=6)){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(x+1==r || x-1==r){
		cout<<1;
	}else{
		cout<<0;
	}
} 
