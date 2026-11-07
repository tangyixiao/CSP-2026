#include<bits/stdc++.h>
using namespace std;
int c1,c2;
char s1[4],s2[4];
bool a=false,b=false,c=false;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		a=true;
	}
	else cout<<0;
	if(a==true&&(s1[0]==s2[0]&&s1[1]==s2[1])){
		cout<<1;
		b=true;
	}
	else cout<<0;
	if(a==true&&b==true&&!(s1[2]=='C'&&s2[2]=='D'||s1[2]=='D'&&s2[2]=='C')){
		cout<<1;
		c=true;
	}
	else cout<<0;
	if(a==true&&b==true&&c==true&&abs(s1[2]-s2[2])==1) cout<<1;
	else cout<<0; 
	return 0;
}
