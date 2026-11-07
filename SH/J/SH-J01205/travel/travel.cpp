#include<bits/stdc++.h>
using namespace std;
bool b1,b2,b3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2;
	string s1,s2;
	b1=false;
	b2=false;
	b3=false;
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	
	if(c1[0]==c2[0] && c1[1]==c2[1]){
		cout<<"1";
		b1=true;
	}else{
		cout<<"0";
	}
	
	if(b1==true && (s1[0]==s2[0] && s1[1]==s2[1])){
		cout<<"1";
		b2=true;
	}else{
		cout<<"0";
	}
	
	if(b2==true && ((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D'))){
		cout<<"1";
		b3=true;
	}else{
		cout<<"0";
    }
	
	if(b3==true && ((((s1[2]=='A' && s2[2]=='B') || (s2[2]=='A' && s1[2]=='B')) || ((s1[2]=='B' && s2[2]=='C') || (s2[2]=='B' && s1[2]=='C'))) || (s1[2]=='D' && s2[2]=='F') || (s2[2]=='D' && s1[2]=='F')))
	{
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
} 
