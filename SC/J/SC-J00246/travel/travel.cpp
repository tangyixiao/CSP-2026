#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool c_same=false,s_same=false,n_same=false;
	if(c1==c2){
		cout<<1;
		c_same=true;
	}else{
		cout<<0;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1] && c_same==true){
		cout<<1;
		s_same=true;
	}else{
		cout<<0;
	}
	if(((s1[2]<='C'&& s2[2]<='C') || 
	(s1[2]>='D' && s2[2]>='D') )&& c_same==true && s_same==true){
		cout<<1;
		n_same=true;
	}else{
		cout<<0;
	}
	if(((int) s1[2]-s2[2]==1 || (int) s1[2]-s2[2]==-1 )
	&&c_same==true && s_same==true && n_same==true){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 