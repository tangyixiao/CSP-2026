#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool ok=true;
	if(c1 == c2 and c1 != "01" and c2 != "16"){
		cout<<1;
	}else{
		cout<<0;
		ok=false;
	}
	if(ok and s1[0] == s2[0] and s1[1] == s2[1]){
		cout<<1;
	}else{
		cout<<0;
		ok=false;
	}
	if(ok and ((s1[2]<'D' and s2[2]<'D') or (s1[2]>'C' and s2[2]>'C'))){
		cout<<1;
	}else{
		cout<<0;
		ok=false;
	}
	if(ok and abs(s1[2]-s2[2])==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}