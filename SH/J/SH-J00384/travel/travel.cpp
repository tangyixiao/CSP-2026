#include<bits/stdc++.h>
#define FILE "travel"
using namespace std;
string c1,s1,c2,s2;
bool a,b,c,d,k[256];
int main(){
	freopen(FILE".in","r",stdin);
	freopen(FILE".out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	k['A']=k['B']=k['C']=0;
	k['D']=k['F']=1;
	if(c1==c2){
		a=true;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			b=true;
			if(k[s1[2]]==k[s2[2]]){
				c=true;
				if(abs(s1[2]-s2[2])==1){
					d=true;
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}
