#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int a=1,b,c;
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	for(int i=0;i<2;i++){
		if(c1[i]==c2[i]){
			continue;
		}else{
			cout<<"0"<<"0"<<"0"<<"0";
			return 0;
		}
	}
	for(int i=0;i<3;i++){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			b=1;
		}else{
			cout<<a<<"0"<<"0"<<"0";
			return 0;
		}
	}
		if((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C')){
				c=1;
			}else if((s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'&&s2[2]<='F')){
				c=1;
			}else{
				cout<<a<<b<<"0"<<"0";
				return 0;
			}
		if((s1[2]=='C'&&s1[2]=='D')||(s1[2]=='D'&&s2[2]=='C')){
			cout<<a<<b<<c<<"0";
		return 0;
	}else if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
		cout<<a<<b<<c<<"1";
		return 0;
	}else{
		if(s1[2]-'A'>=s2[2]-'A'){
			if((s1[2]-'A')-(s2[2]-'A')==1){
				cout<<a<<b<<c<<"1";
				return 0;
			}else{
				cout<<a<<b<<c<<"0";
				return 0;
			}
		}else{
			if((s2[2]-'A')-(s1[2]-'A')==1){
				cout<<a<<b<<c<<"1";
				return 0;
			}else{
				cout<<a<<b<<c<<"0";
				return 0;
			}
		}
	}
	
	return 0;
}
