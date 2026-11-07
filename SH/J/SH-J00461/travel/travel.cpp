#include<bits/stdc++.h>
using namespace std;
string s1,s2,n1,n2;
bool xiang,pai,ce,xiang2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>n1>>s2>>n2;
	if(s1!=s2){
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(n1[0]!=n2[0] || n1[1]!=n2[1]){
		cout<<1000;
		return 0;
	}
	if(((n1[2]=='D'||n1[2]=='F') && (n2[2]=='A'||n2[2]=='B'||n2[2]=='C')) || ((n2[2]=='D'||n2[2]=='F') && (n1[2]=='A'||n1[2]=='B'||n1[2]=='C'))){
		cout<<1100;
		return 0;
	}
	if((n1[2]=='A' && n2[2]=='B') || (n1[2]=='B' && n2[2]=='C') || (n1[2]=='F' && n2[2]=='D') || (n2[2]=='A' && n1[2]=='B') || (n2[2]=='B' && n1[2]=='C') || (n2[2]=='F' && n1[2]=='D')){
		 cout<<1111;
		 return 0;
	} 
	else{
		cout<<1110;
		return 0;
	}
	return 0;
}
