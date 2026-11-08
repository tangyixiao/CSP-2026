#include<bits/stdc++.h>
using namespace std;
int  x,y;
string s[3];
int k[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>s[0]>>y>>s[1];
	char c=s[0][2],d=s[1][2];
	int a=10*(s[0][0]-'0')+(s[0][1]-'0');
	int b=10*(s[1][0]-'0')+(s[1][1]-'0');\
	int e=s[0][2],f=s[1][2];
	if(x==y){
		k[0]=1;
		if(a==b){
			k[1]=1;
			if((c>='A' && c<='C' && d>='A' && d<='C') || (c>='D' && c<='F')){
				k[2]=1;
				if(abs(e-d)==1) k[3]=1;
			}
		}
	}
	for(int i=0;i<4;i++){
		cout<<k[i];
	}
	return 0;
}
