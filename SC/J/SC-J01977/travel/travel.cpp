#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f1,f2,f3,f4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		f1=1;
		cout<<1;
	}
	else cout<<0;
	if(f1&&(s1[0]+s1[1])==(s2[0]+s2[1])){
		f2=1;
		cout<<1;
	}
	else cout<<0;
	if(f2&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))){
		f3=1;
		cout<<1;
	}
	else cout<<0;
	if(f3&&abs(s1[2]-s2[2])==1){
		cout<<1;
	}
	else cout<<0;
	return 0;
}