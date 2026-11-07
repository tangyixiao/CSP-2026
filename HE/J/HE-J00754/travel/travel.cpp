
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1,s2,c1,c2;
char ans[5];
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
cin>>c1>>s1>>c2>>s2;
for(ll i=0;i<2;i++){
		if(c1[i]=c2[i]){
		for(ll j=0;j<3; ){
		        if(s1[0]=s2[0]&&s1[1]==s2[1]){
		        	ans[1]='1';
		            if(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D'){
		            	ans[2]='1';
		            	if(s1[2]=='A'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A'){
		            		ans[3]='0';
						}else ans[3]='1';
		            }else ans[2]='0';
		        }else ans[1]='0';	
			}
		 ans[0]='1';
		 }
	     else ans[0]='0';
	}
	for(ll i=0;i<4;i++) 
	cout<<ans[i];
return 0;
}
