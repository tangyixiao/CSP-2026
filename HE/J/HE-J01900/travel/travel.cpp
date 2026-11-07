#include<bits/stdc++.h>
using namespace std;
int a=0,b=0,c=0,d=0;
string c1,s1,c2,s2;
int x[]={1,1,1,2,2};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a=1;
		if(s1[1]==s2[1] && s1[0]==s2[0]){
			b=1;
			if(x[s1[2]-'A']==x[s2[2]-'A']){
				c=1;
				if(s1[2]-s2[2]==1 || s1[2]-s2[2]==-1){
					d=1;
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
} 
