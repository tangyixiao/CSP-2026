#include <bits/stdc++.h>
using namespace std;
int z[5];
string s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel,out","w",stdout);
	getline(cin,s);
	if(s[0]==s[7] && s[1]==s[8]){
		z[0]=1;
		if(s[3]==s[10] && s[4]==s[11]){
			z[1]=1;
			if((s[5]<='C' && s[12]<='C') or (s[5]>'C' && s[12]>'C')){
				z[2]=1;
				if(s[5]-s[12]==1 or s[12]-s[5]==1){
					z[3]=1;
				}
			}
		}
	}
	
	for (int i=0;i<4;i++){
		cout<<z[i];
	}
}