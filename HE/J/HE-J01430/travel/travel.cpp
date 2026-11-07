#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool a=false,b=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
		b=true;
	}
	else cout<<0;
	if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&b==true){
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
			cout<<1;
			a=true; 
		}
		else cout<<0;
	}
	else{
		if((s2[2]=='D'||s2[2]=='F')&&b==true){
			cout<<1;
			a=true;
		}
		else cout<<0;
	}
	if((s1[2]-s2[2]==-1||s1[2]-s2[2]==-1)&&a==true) cout<<1;
	else cout<<0;
	return 0;
}
