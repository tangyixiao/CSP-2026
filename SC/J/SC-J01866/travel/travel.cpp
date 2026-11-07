#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2; 
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	char a=s1[2],b=s2[2];
	if((a<='C'&&a>='A'&&b<='C'&&b>='A')||(a<='E'&&a>='D'&&b<='E'&&b>='D')){
		cout<<1;
	}else {
		cout<<"00";
		return 0;
	}
	if((char(a+1)==b&&a!='C')||(char(b+1)==a&&b!='C')){
		cout<<1;
	}else {
		cout<<0;
	}
	return 0;
}