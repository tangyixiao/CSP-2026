#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,tmp,ans="";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char r=s1[2],x=s2[2];
	tmp+=r;
	if(r>x)tmp=x+tmp;
	else tmp=tmp+x; 
	int r1=10*(s1[0]-'0')+s1[1]-'0',x1=10*(s2[0]-'0')+s2[1]-'0';
	if(c1==c2){
		ans+='1';
		if(r1==x1){
			ans+='1';
			if(!((r<='C')^(x<='C'))){
				ans+='1';
				if(tmp=="AB"||tmp=="BC"||tmp=="DF")ans+='1';
				else ans+='0';
			}
			else ans+="00"; 
		}
		else ans+="000";
	}
	else ans="0000";
	cout<<ans;
	
	}
