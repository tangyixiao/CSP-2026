#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	} 
	string h1=s1.substr(0,2);
	string h2=s2.substr(0,2);
	if(h1==h2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	char f1=s1[2];
	char f2=s2[2];
	if((h1==h2)&&((f1<='C'&&f2<='C')||(f1>='D'&&f2>='D'))){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(abs(f1-f2)==1&&(((f1!='C')&&(f2!='D'))&&(f1!='D')&&(f2!='C'))){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}