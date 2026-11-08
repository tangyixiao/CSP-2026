#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;cin>>c1>>s1>>c2>>s2;
	bool sb;
	if(c1==c2){
		cout<<1;
		sb=1;
	}
	else {
		cout<<0;
		sb=0;
	}
	if(sb==1 and s1[0]==s2[0] and s1[1]==s2[1]){
		cout<<1;
		sb=1;
	}
	else {
		cout<<0;
		sb=0;
	}	
	if(sb==1 and ((s1[2]>='D' and s2[2]>='D') or (s1[2]<='C' and s2[2]<='C')) ){
		cout<<1;
		sb=1;
	}
	else {
		cout<<0;
		sb=0;
	}
	if(sb==1 and ((s1[2]==s2[2]+1 or s1[2]==s2[2]-1)and ((s1[2]!='C' and s2[2]!='D') and (s1[2]!='D' and s2[2]!='C'))))cout<<1;
	else cout<<0;
	return 0; 
}
// and ((s1[2]!='C' and s2[2]!='D') and (s1[2]!='D' and s2[2]!='C'))
