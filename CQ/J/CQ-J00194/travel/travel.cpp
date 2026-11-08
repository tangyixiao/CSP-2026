#include<bits/stdc++.h>
using namespace std;
string a,b,s,c;
int k[5];
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;
	cin>>s;
	cin>>b;
	cin>>c;
	if(a==b){
		k[0]=1;
	}
	else k[0]=0;
	if(s[0]==c[0]&&s[1]==c[1]&&k[0]==1){
		k[1]=1;
	}
	else k[1]=0;
	if(k[1]==1){
		if((s[2]<='C'&&c[2]<='C')||(s[2]>='D'&&c[2]>='D')){
			k[2]=1;
		}else k[2]=0;
	}
	else k[2]=0;
	if((s[2]+1==c[2]||c[2]+1==s[2])||(s[2]=='D'&&c[2]=='F')||(s[2]=='F'&&c[2]=='D')){
		if(k[2]==1){
			k[3]=1;
		}else k[3]=0;
	}
	else k[3]=0;
	for(int i=0;i<4;i++){
		cout<<k[i];
	} 
	return 0;
}
