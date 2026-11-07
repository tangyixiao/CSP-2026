#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	

	
	cin>>c1>>s1>>c2>>s2;
	char f1=s1[2];
	char f2=s2[2];
	
	if(c1==c2){
		cout<<1;
	}
	else cout<<0;
	if((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1])){
		cout<<1;
	}
	else cout<<0;
	if((((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1]))) && ((f1<='C' && f2<='C') || (f1>='D' && f2>='D'))){
		cout<<1;
	}
	else cout<<0;
	if(f1>f2){
		if(((((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1]))) && ((f1<='C' && f2<='C') || (f1>='D' && f2>='D'))) && (int(f1-f2)==1)) cout<<1;
		else cout<<0;
	}
	if(f1<f2){
		if(((((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1]))) && ((f1<='C' && f2<='C') || (f1>='D' && f2>='D'))) && (int(f2-f1)==1)) cout<<1;
		else cout<<0;
	}

	return 0;
}
