#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(false);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool v1=false,v2=false,v3=false,v4=false;
	
	if(c1==c2) v1=true;
	if(!v1){
		cout<<"0000\n";
		return 0;
	}
	
	string t1="",t2="";
	for(int i=0;i<2;i++){
		t1+=s1[i];
		t2+=s2[i];
	}
	if(t1==t2) v2=true;
	if(!v2){
		cout<<"1000\n";
		return 0;
	}
	
	if((s1[2]=='A' && (s2[2]=='B' || s2[2]=='C')) || (s1[2]=='B' && (s2[2]=='A' || s2[2]=='C')) || (s1[2]=='C' && (s2[2]=='A' || s2[2]=='B'))) v3=true;
	if(!v3){
		cout<<"1100\n";
		return 0;
	}
	
	if(abs(s1[2]-s2[2])==1) v4=true;
	if(!v4){
		cout<<"1110\n";
		return 0;
	}
	
	cout<<"1111\n";
	return 0;
}